#include <iostream>
#include "BSTNode.h"
#include "BSTClass.h"
int main()
{
    BSTClass treeTest; //invokes constructor which will create treeTest
                        //object and read in file and insert into BST

    treeTest.printTree(); //printing out the tree recursively (in order)

    treeTest.search();
}