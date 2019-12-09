//
//  fileReader.cpp
//  adventofcode
//
//  Created by Merovee Charrue on 07/12/2019.
//  Copyright © 2019 Merovee Charrue. All rights reserved.
//

#include "fileReader.hpp"

using namespace std;

FileReader::FileReader(const string& filename)
{
    inputFile.open(filename);

    if (!inputFile.is_open()) {
        throw runtime_error("The file did not open.");
    }
}

string FileReader::readOneLine(char delim)
{
    string line;
    getline(inputFile, line, delim);
    return line;
}

int FileReader::readOneInt()
{
    int num;
    inputFile >> num;
    return num;
}

bool FileReader::isEof()
{
    return inputFile.eof();
}

FileReader::~FileReader()
{
    if (inputFile.is_open()) {
        inputFile.close();
    }
}
