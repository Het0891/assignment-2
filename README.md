# Binary Tree Program

This C program allows the user to create a binary tree, insert nodes, calculate the height of the tree, and free the tree.

## Files

- `main.c`: Contains the main program logic and user interface.
- `tree.c`: Contains functions to manipulate the binary tree.
- `tree.h`: Header file declaring the structure and functions for the binary tree.

## Node Structure

Each node in the binary tree contains an `id` (integer) and a `project` name (string).

```c
typedef struct myNode {
    int id;
    char project[MAX_PROJ_NAME];
    struct myNode *left;
    struct myNode *right;
} Node;
