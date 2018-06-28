//
// Created by Cyrus Khorram on 3/28/18.
//

#ifndef UNTITLED1_BSTNODE_H
#define UNTITLED1_BSTNODE_H
#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
using std::fstream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

class BSTNode
{
public:
    BSTNode(char englishLetter, string morseString); //constructor
    ~BSTNode(); //destructor


    //Getters:

    BSTNode*& getLeft(); //getter for left pointer
    BSTNode*& getRight(); //getter for right pointer
    string getMorseCode(); //getter for morse code string
    char getEnglishChar(); //getter for english

    //Setters:

    void setLeft(BSTNode *newLeft); //setter for left pointer
    void setRight(BSTNode *newRight); //setter for right pointer
    void setMorseCode(string newMorse); //setter for morse code string
    void setEnglishChar(char newEnglish); //setter for english char


private:
    BSTNode *mLeft;
    BSTNode *mRight;

    string morseCode;
    char englishChar;

};


#endif //UNTITLED1_BSTNODE_H
