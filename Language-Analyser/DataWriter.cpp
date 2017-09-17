#include "DataWriter.h"
#include <fstream>


void DataWriter::WriteCSVFile(map<string, int>& LetterMap)
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
