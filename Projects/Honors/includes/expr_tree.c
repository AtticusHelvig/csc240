#include "expr_tree.h"

ExpressionTree* tree_init(Type type, ExpressionTree* left,
                          ExpressionTree* right) {
    ExpressionTree* tp = (ExpressionTree*)malloc(sizeof(ExpressionTree));
    tp->node = tree_node_init(type);
    tp->left = left;
    tp->right = right;
    return tp;
}

ExpressionTreeNode* tree_node_init(Type type) {
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

void tree_print(ExpressionTree* tree) {
    char rep = 'N';

    if (tree == NULL) {
        printf("[N] ");
        return;
    }

    if (tree->node == NULL) {
        printf("[!] ");
        return;
    }

    switch (tree->node->type) {
        case OPERATION:
            rep = '+';
            break;
        case VARIABLE:
            rep = tree->node->variable->id[0];
            break;
        case LITERAL:
            rep = tree->node->literal + '0';
            break;
        case FUNCTION:
            rep = 'F';
            break;
        default:
            break;
    }

    printf("[%c] ", rep);
    tree_print(tree->left);
    tree_print(tree->right);
    return;
}

int op_evaluate(ExpressionTree* tree) {
    Operator op = tree->node->operator;
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
