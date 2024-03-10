#include "expr_tree.h"

#include <stdio.h>
#include <string.h>

ExpressionTree* tree_init(Type type) {
    fprintf(stderr, "In tree_init()\n");
    ExpressionTree* tp = (ExpressionTree*)malloc(sizeof(ExpressionTree));
    tp->node = tree_node_init(type);
    return tp;
}

ExpressionTreeNode* tree_node_init(Type type) {
    fprintf(stderr, "In tree_node_init()\n");
    ExpressionTreeNode* np =
        (ExpressionTreeNode*)malloc(sizeof(ExpressionTreeNode));
    np->type = type;
    return np;
}

int tree_evaluate(ExpressionTree* tree) {
    if (tree == NULL) {
        return -1;
    }

    int value;

    switch (tree->node->type) {
        case OPERATION:
            value = op_evaluate(tree);
            break;

        case VARIABLE:
            value = var_evaluate(tree->node->variable);
            break;

        case LITERAL:
            value = tree->node->literal;
            break;

        case FUNCTION:
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