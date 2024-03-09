#include "expr_tree.h"

#include <string.h>

ExpressionTree* tree_init(Type type) {
    ExpressionTree* tp = (ExpressionTree*)malloc(sizeof(ExpressionTree));
    tp->node = tree_node_init(type);
}

ExpressionTreeNode* tree_node_init(Type type) {
    ExpressionTreeNode* np =
        (ExpressionTreeNode*)malloc(sizeof(ExpressionTreeNode));
    np->type = type;
}

int tree_evaluate(ExpressionTree* tree) {
    if (tree == NULL) {
        return -1;
    }

    int value;

    switch (tree->node->type) {
        case operation:
            value = op_evaluate(tree);
            break;

        case variable:
            value = var_evaluate(tree->node->variable);
            break;

        case literal:
            value = tree->node->literal;
            break;

        case function:
            value = func_evaluate(tree->node->function);

        default:
            break;
    }

    return value;
}

int op_evaluate(ExpressionTree* tree) {
    if (tree->node->operation == NULL) {
        return -1;
    }

    Operator op = tree->node->operation->op;
    int left = tree_evaluate(tree->left);
    int right = -1;
    if (op != not ) {
        right = tree_evaluate(tree->right);
        if (right == -1) {
            return -1;
        }
    }

    switch (op) {
        case and:
            return left && right;

        case or:
            return left || right;

        case xor:
            return (left || right) && !(left && right);

        case nand:
            return !(left && right);

        case nor:
            return !(left || right);

        case xnor:
            return !((left || right) && !(left && right));

        case not:
            return !(left);

        default:
            return -1;
    }
}

int var_evaluate(Variable* variable) { return -1; }

int func_evaluate(Function* function) { return -1; }

int var_isIdEqual(const Variable* variable, const char* id) {
    return strcmp(variable->id, id);
}
