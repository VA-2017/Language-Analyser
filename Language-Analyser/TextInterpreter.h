#pragma once
#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Letter {
    string specificLetter;
    unsigned long Count;
};

class TextInterpreter {
public:
    void InterpretText(std::vector<string>FileTexts);
    unsigned long GetLetterCount();
private:
    void CountAllLetters();
    bool IsNumber(string& Letter);
    bool IsCTRLALTLetter(string& Letter);
    bool IsShiftLetter(string& Letter);
    bool IsNormalLetter(string& Letter);
public:

private:
    string Text;
    unsigned long LetterCount = 0;
    map<string, int> LettersMap;
};

