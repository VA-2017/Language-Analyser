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
private:
    void DeleteAllNonProcessedLetters();
    void CountAllLetters();

    bool CountAllCTRLATLKeys();
    bool CountAllShiftKeys();
    bool CountNormalLetters();
    bool ExtractAllNumbers();
    bool CompareLetter(std::vector<Letter> CurrentComparable);
public:

private:
    string Text;
    size_t LetterCount = 0;
    vector<Letter>CTRLALTLetters;
    vector<Letter>ShiftLetters;
    vector<Letter>Letters {{"a", 0}, {"b", 0}, {"c", 0}, {"d", 0}, {"e", 0}, {"f", 0}, {"g", 0}, {"h", 0}, {"j", 0}, {"k", 0}, {"l", 0}, {"m", 0}, {"n", 0}, {"o", 0}, {"p", 0}, {"q", 0}, {"r", 0}, {"s", 0}, {"t", 0}, {"u", 0}, {"v", 0}, {"w", 0}, {"x", 0}, {"y", 0}, {"z", 0}};
};

