#include "TextInterpreter.h"

TextInterpreter::TextInterpreter(std::string ImportText)
{
    Text = ImportText;
    CountAllLetters();
    DeleteAllNonProcessedLetters();
}

void TextInterpreter::DeleteAllNonProcessedLetters()
{

    std::invalid_argument("Nicht verarbeitbare Zeichen im Text.");

}

bool TextInterpreter::CountAllCTRLATLKeys()
{
    std::exception("Nicht Implementiert");
    return false;
}

bool TextInterpreter::CountAllShiftKeys()
{
    std::exception("Nicht Implementiert");
    return false;
}

bool TextInterpreter::CountNormalLetters()
{
    return false;
}

bool TextInterpreter::ExtractAllNumbers()
{
    return false;
}

bool TextInterpreter::CompareLetter(std::vector<Letter> CurrentComparable)
{
    for (size_t i = 0; i < CurrentComparable.size(); i++) {
        if (*CurrentComparable.at(i).specificLetter.c_str() == (Text.at(LetterCount))) {
            CurrentComparable.at(i).Count++;
        }
    }
    return false;
}

void TextInterpreter::CountAllLetters()
{
    for (size_t i = 0; i < Text.size(); i++) {
        if (CountAllCTRLATLKeys()) {
            continue;
        }
        if (CountAllShiftKeys()) {
            continue;
        }
        if (CountNormalLetters()) {

        }
        DeleteAllNonProcessedLetters();
    }
}
