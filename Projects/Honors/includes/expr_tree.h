#ifndef EXPR_TREE_H
#define EXPR_TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ExpressionTree ExpressionTree;
typedef struct ExpressionTreeNode ExpressionTreeNode;
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

ExpressionTree *tree_init(Type type, ExpressionTree *left,
                          ExpressionTree *right);
int tree_evaluate(ExpressionTree *tree);
void tree_print(ExpressionTree *tree);

struct ExpressionTreeNode {
    Type type;
    int literal;
    Operator operator;
    Variable *variable;
    Function *function;
};

ExpressionTreeNode *tree_node_init(Type type);

int op_evaluate(ExpressionTree *tree);

struct Variable {
    char *id;
    ExpressionTree *value;
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
