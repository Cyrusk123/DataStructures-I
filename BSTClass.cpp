//
// Created by Cyrus Khorram on 3/28/18.
//

#include "BSTClass.h"
BSTClass::BSTClass()
{
    mRoot = nullptr;

    fstream inFile;
    inFile.open("/Users/cyruskhorram/Desktop/MorseTable.txt");

    //Reading in the first letter and morse code, then putting it on the heap

    char inputChar; //for reading in the char from the morseTable.txt
    inFile.get(inputChar);

    string inputString; //for reading in the string from the morseTable.txt
    getline(inFile, inputString);

    mRoot = new BSTNode(inputChar, inputString); //Root is made and constructor sets the values

    while(inFile.eof() == false) //Will run until the end of file is reached
    {
        inFile.get(inputChar); //gets Char letter
        getline(inFile, inputString); //gets the morse string

        insert(mRoot, inputString, inputChar);
    }

    inFile.close();
}
BSTClass::~BSTClass() //deleting all the nodes - post order (Left, Right, Process)
{
    deletePostOrder();
}

void BSTClass::insert(BSTNode *&pCur, string newString, char newChar) {
    if (pCur == nullptr) //pCur is equal to nullptr
    {
        pCur = new BSTNode(newChar, newString);
    }

    else if (newChar < pCur->getEnglishChar()) //if the character is less than, so go left
    {
        insert(pCur->getLeft(), newString, newChar);
    }

    else if (newChar > pCur->getEnglishChar()) //if the character is greater than, so go right
    {
        insert(pCur->getRight(), newString, newChar);
    }

}

void BSTClass::deletePostOrder(BSTNode *pMem) //visiting all nodes in the tree via post order traversal and deletes them
{
    if(pMem == nullptr)
    {
        return;
    }

    deletePostOrder(pMem->getLeft());
    deletePostOrder(pMem->getRight());

    delete(pMem);

    //cout << "Deleted" << endl;

}

void BSTClass::printTree(BSTNode *pMem)  //prints tree in order
{
    if(pMem == nullptr)
    {
        return;
    }

    printTree(pMem->getLeft());

    cout << pMem->getEnglishChar() << endl;

    printTree(pMem->getRight());

}

void BSTClass::deletePostOrder()
{
    deletePostOrder(mRoot);
}
void BSTClass::printTree()
{
    printTree(mRoot);
}

void BSTClass::search() /*public search function that opens the Convert.txt file, then reads in the input and
                            then uses a loop to iterate through and search through chars one by one in the tree*/
{
    fstream inFile;
    inFile.open("/Users/cyruskhorram/Desktop/Convert.txt");



    string input;
    getline(inFile, input);
    cout << input << endl;

    for(int i = 0; i < input.size(); i++) //will loop through the input string
    {
        char temp = input.at(i);
        //cout << temp;
        cout << search(temp, mRoot);
        cout<< " ";
    }

    inFile.close();
}

string BSTClass::search(char &key, BSTNode *pMem)
{
    if(pMem == nullptr)
    {
        return "";
    }

    if(pMem->getEnglishChar() == key) //if value at that node is equal to the key, then return the morse code string
    {
        return pMem->getMorseCode();
    }

    else if(key < pMem->getEnglishChar())
    {
        return search(key, pMem->getLeft());
    }

    else if(key > pMem->getEnglishChar())
    {
        return search(key, pMem->getRight());
    }

}