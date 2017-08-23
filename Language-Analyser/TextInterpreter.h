#pragma once
#include <iostream>
#include <vector>
#include <map>
using namespace std;
class TextInterpreter
{
public:
    TextInterpreter(string ImportText);

private:
    void DeleteAllNonProcessedLetters();   
    void CountAllSpecialKeys();
    void CountAllCTRLATLKeys();
    void CountAllShiftKeys();
    void CountAllLetters();
public:

private:
    string Text;
    map<char, unsigned long>CTRLALTLetters;
    map<char,unsigned long>ShiftLetters;
    map<char,unsigned long>Letters;
};