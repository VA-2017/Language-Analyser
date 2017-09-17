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
    void WriteLetterCountToFile();
private:
    void CountAllLetters(string& Text);
    bool IsNumber(string& Letter);
    bool IsCTRLALTLetter(string& Letter);
    bool IsShiftLetter(string& Letter);
    bool IsNormalLetter(string& Letter);
public:

private:
    unsigned long LetterCount = 0;
    map<string, int> LettersMap;
};

