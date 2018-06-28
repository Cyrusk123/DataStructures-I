//
// Created by Cyrus Khorram on 3/28/18.
//

#include "BSTNode.h"
BSTNode::BSTNode(char englishLetter, string morseString)
{
    englishChar = englishLetter;
    morseCode = morseString;
    mLeft = nullptr;
    mRight = nullptr;
}
BSTNode::~BSTNode()
{

}

BSTNode*& BSTNode::getLeft()
{
    return mLeft;

}
BSTNode*& BSTNode::getRight()
{
    return mRight;

}

string BSTNode::getMorseCode()
{
    return morseCode;
}

char BSTNode::getEnglishChar()
{
    return englishChar;

}

void BSTNode::setLeft(BSTNode *newLeft)
{
    mLeft = newLeft;

}
void BSTNode::setRight(BSTNode *newRight)
{
    mRight = newRight;

}

void BSTNode::setMorseCode(string newMorse)
{
    morseCode = newMorse;
}

void BSTNode::setEnglishChar(char newEnglish)
{
    englishChar = newEnglish;
}