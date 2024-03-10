#ifndef EXPR_TREE_H
#define EXPR_TREE_H

#include <stdlib.h>

typedef struct ExpressionTree ExpressionTree;
typedef struct ExpressionTreeNode ExpressionTreeNode;
typedef struct Operation Operation;
typedef struct Variable Variable;
typedef struct Function Function;
typedef enum Type Type;
typedef enum Operator Operator;
enum Type { OPERATION, VARIABLE, FUNCTION, LITERAL };
enum Operator { and, or, not, xor, nand, nor, xnor };

struct ExpressionTree {
    ExpressionTreeNode *node;
    ExpressionTree *left, *right;
};

ExpressionTree *tree_init(Type type);
int tree_evaluate(ExpressionTree *tree);

struct ExpressionTreeNode {
    Type type;
    int literal;
    Operation *operation;
    Variable *variable;
    Function *function;
};

ExpressionTreeNode *tree_node_init(Type type);

struct Operation {
    Operator op;
};

int op_evaluate(ExpressionTree *tree);

struct Variable {
    char *id;
    int *value;
};

int var_evaluate(Variable *variable);
int var_isIdEqual(const Variable *variable, const char *id);

struct Function {
    char *name;
    char **input;
    int inputSize;
    char **output;
    int outputSize;
    ExpressionTree expressionTree;
};

int func_evaluate(Function *function);

#endif
