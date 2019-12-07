//
//  fileReader.cpp
//  adventofcode
//
//  Created by Merovee Charrue on 07/12/2019.
//  Copyright © 2019 Merovee Charrue. All rights reserved.
//

#include "fileReader.hpp"

using namespace std;

FileReader::FileReader(string filename)
{
    inputFile.open(filename);

    if (!inputFile.is_open()) {
        throw runtime_error("The file did not open.");
    }
}

string FileReader::readOneLine()
{
    string line;
    getline(inputFile, line);
    return line;
}

FileReader::~FileReader()
{
    if (inputFile.is_open()) {
        inputFile.close();
    }
}
