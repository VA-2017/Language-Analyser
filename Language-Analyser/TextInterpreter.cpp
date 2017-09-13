#include "TextInterpreter.h"

void TextInterpreter::InterpretText(std::vector<string> FileTexts)
{
    for (auto& filetext : FileTexts) {
        Text = filetext;
        CountAllLetters();

    }
}


bool TextInterpreter::IsCTRLALTLetter(string& Letter)
{
    std::exception("Nicht Implementiert");
    return false;
}

bool TextInterpreter::IsShiftLetter(string& Letter)
{
    std::exception("Nicht Implementiert");
    return false;
}

bool TextInterpreter::IsNormalLetter(string& Letter)
{
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
