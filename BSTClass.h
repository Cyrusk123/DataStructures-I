//
// Created by Cyrus Khorram on 3/28/18.
//

#ifndef UNTITLED1_BSTCLASS_H
#define UNTITLED1_BSTCLASS_H
#include "BSTNode.h"

class BSTClass
{
public:
    BSTClass(); //constructor
    ~BSTClass(); //destructor

    void deletePostOrder(); //public function that calls private function (deletes all nodes)
    void printTree(); //public function that calls private printTree (prints in order)
    void insert(BSTNode *&pCur, string newString, char newChar); //recursively inserts into BST

    void search(); //search function that will open Convert.txt and print out the morse code message
    string search(char &key, BSTNode *pMem); /*overloaded search function that will look through the BST and
                            return the corresponding morse code string */


private:
    void deletePostOrder(BSTNode *pMem); //deletes all nodes
    void printTree(BSTNode *pMem); //prints out the tree
    BSTNode *mRoot; //pointer to root of tree

};


#endif //UNTITLED1_BSTCLASS_H
