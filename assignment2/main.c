#include <stdio.h>
#include "tree.h"

int main() {
    Node* root = NULL;

    
    insertNode(&root, createNode());
    insertNode(&root, createNode());
    insertNode(&root, createNode());

    
    printf("Tree Height: %d\n", treeHeight(root));

    
    freeTree(root);

    return 0;
}