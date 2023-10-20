#include <stdio.h>
#include "bst.h"

int main() {
    Tree t = createTree();
    insert(t, 11);
    imprime(t, "AVL");
    insert(t, 20);
    imprime(t, "AVL");
    insert(t, 14);
    imprime(t, "AVL");
    insert(t, 22);
    imprime(t, "AVL");
    insert(t, 29);
    imprime(t, "AVL");
    insert(t, 18);
    imprime(t, "AVL");
    insert(t, 16);
    imprime(t, "AVL");
    insert(t, 17);
    imprime(t, "AVL");

    return 0;
}
