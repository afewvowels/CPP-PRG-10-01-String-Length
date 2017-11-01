//
//  main.cpp
//  CPP-PRG-10-01-String-Length
//
//  Created by Keith Smith on 11/1/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a function that returns an integer and accepts a pointer to a C-string as an
//  argument. The function should count the number of characters in the string and return that
//  number. Demonstrate the function in a simple program that asks the user to input a
//  string, passes it to the function, then displays the function's return value.

#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>

using namespace std;

string getUserInput();
int *getStringLength(string *);

int main()
{
    string *strString = nullptr;
    int *intLength = nullptr;
    
    strString = new string;
    
    *strString = getUserInput();
    
    intLength = getStringLength(strString);
    
    cout << *intLength << endl;
    
    return 0;
}

string getUserInput()
{
    string *strTemp = nullptr;
    
    strTemp = new string;
    
    cout << "Please enter a string:\n";
    getline(cin, *strTemp);
    
    return *strTemp;
}

int *getStringLength(string *strStr)
{
    int *intLen = nullptr;
    
    intLen = new int;
    
    *intLen = strStr->size();
    
    return intLen;
}
