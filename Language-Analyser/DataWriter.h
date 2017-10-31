#pragma once
#include <iostream>
#include <vector>
#include <map>
using namespace std;
class DataWriter {
public:
    void WriteLetterCountCSVFile(map<string, int>& LetterMap);
    void WriteLetterCombinationsCSVFile(map<string, std::map<string, int>>& LetterCombinationmap);
    void TripleWriteLetterCombinationsCSVFile(map<string, map<string, std::map<string, int>>>& LetterCombinationmap);
private:

};

