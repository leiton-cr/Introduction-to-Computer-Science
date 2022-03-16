#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int id;
    struct node *left;
    struct node *right;
} node;

void free_tree(node *root);
void print_tree(node *root);

int main(void)
{

    node *tree = NULL;

    node *branch = malloc(sizeof(node));

    if (branch == NULL)
    {
        return 1;
    }

    branch->left = NULL;
    branch->right = NULL;
    branch->id = 404;
    tree = branch;

    branch = malloc(sizeof(node));

    if (branch == NULL)
    {
        free(tree);
        return 1;
    }

    branch->left = NULL;
    branch->right = NULL;
    branch->id = 202;
    tree->left = branch;

    branch = malloc(sizeof(node));

    if (branch == NULL)
    {
        free(tree->left);
        free(tree);
        return 1;
    }

    branch->left = NULL;
    branch->right = NULL;
    branch->id = 606;
    tree->right = branch;

    print_tree(tree);
}

void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }

    print_tree(root->left);
    printf("%i \n", root->id);
    print_tree(root->right);
}

void free_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }

    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->id)
    {
        return search(tree->left, number);
    }
    else if (number > tree->id)
    {
        return search(tree->right, number);
    }
    else
    {
        return true;
    }
}