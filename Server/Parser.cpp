#include "Parser.h"

string Parser::copyFromCharToChar(char char1, char char2, string str)
{
    string newStr = "";

    int start = str.find_first_of(char1) + 1;
    int end = str.find_first_of(char2);

    for (unsigned int i = start; i < end; ++i)
    {
        newStr += str.at(i);
    }
    return newStr;
}

string Parser::copyFromCharToEnd(char character, string str)
{
    unsigned int position = str.find_first_of(character) + 1;
    string newStr = "";
    for (unsigned int i = position; i < str.size(); i++)
    {
        newStr += str.at(i);
    }
    return newStr;
}
