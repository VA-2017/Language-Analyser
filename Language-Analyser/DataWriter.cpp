#include "DataWriter.h"
#include <fstream>


void DataWriter::WriteLetterCountCSVFile(map<string, int>& LetterMap)
{
    ofstream myfile("LetterCount.csv");
    if (myfile.is_open()) {
        for (auto& Letter : LetterMap) {
            myfile << Letter.first.c_str();
            myfile << ",";
            myfile << Letter.second + 1;
            myfile << ";\n";
        }
        myfile.close();
    }
}

void DataWriter::WriteLetterCombinationsCSVFile(map<string, std::map<string, int>>& LetterCombinationmap)
{
    ofstream myfile("WriteLetterCombinations.csv");
    if (myfile.is_open()) {
        for (auto& Letter : LetterCombinationmap) {
            for (auto& Nextletter : Letter.second) {
                myfile << Letter.first.c_str();
                myfile << ",";
                myfile << Nextletter.first.c_str();
                myfile << ",";
                myfile << Nextletter.second;
                myfile << ";\n";
            }
        }
    }
    myfile.close();
}

void DataWriter::TripleWriteLetterCombinationsCSVFile(map<string, map<string, std::map<string, int>>>& LetterCombinationmap)
{
    ofstream myfile("WriteTripleLetterCombinations.csv");
    if (myfile.is_open()) {
        for (auto& Letter : LetterCombinationmap) {
            for (auto& Nextletter : Letter.second) {
                for (auto& NextNextletter : Nextletter.second) {


                    myfile << Letter.first.c_str();
                    myfile << ",";
                    myfile << Nextletter.first.c_str();
                    myfile << ",";
                    myfile << NextNextletter.first.c_str();
                    myfile << ",";
                    myfile << NextNextletter.second;
                    myfile << ";\n";
                }
            }
        }
    }
    myfile.close();
}
