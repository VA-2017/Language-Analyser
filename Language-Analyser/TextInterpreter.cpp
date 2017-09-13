#include "TextInterpreter.h"

void TextInterpreter::InterpretText(std::vector<string> FileTexts)
{
    for (auto& filetext : FileTexts) {
        LetterCount + filetext.size();
        Text = filetext;
        CountAllLetters();
    }
}

unsigned long TextInterpreter::GetLetterCount()
{
    return LetterCount;
}


bool TextInterpreter::IsCTRLALTLetter(string& Letter)
{
    string find = "@#¬|¢´[]}{";
    if (Letter.find_first_of(find) == Letter.npos) {
        return true;
    }
}

bool TextInterpreter::IsShiftLetter(string& Letter)
{
    string find = "§'^ü¨öä$-.,°+*ç%&/()=?`è!£àé_:;" + '"';
    if (Letter.find_first_of(find) == Letter.npos) {
        return true;
    }
    return false;
}

bool TextInterpreter::IsNormalLetter(string& Letter)
{
    if (Letter.find_first_of("abcdefghijklmnopqrstuvwxyzöäü") == Letter.npos) {
        return true;
    }
    return false;
}


void TextInterpreter::CountAllLetters()
{
    for (auto i : Text) {
        string letter(&i);
        if (IsNumber(letter)) {
            continue;
        }
        if (IsCTRLALTLetter(letter)) {
            continue;
        }
        if (IsShiftLetter(letter)) {
            continue;
        }
        if (IsNormalLetter(letter)) {

        }
    }
}

bool TextInterpreter::IsNumber(string& Letter)
{
    if (Letter.find_first_of("0123456789") == Letter.npos) {
        return true;
    }
    return false;
}
