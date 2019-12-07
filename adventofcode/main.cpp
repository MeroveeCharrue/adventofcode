//
//  main.cpp
//  adventofcode
//
//  Created by Merovee Charrue on 06/12/2019.
//  Copyright © 2019 Merovee Charrue. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "fileReader.hpp"

using namespace std;

void solve(string);

int main()
{
    try {
        solve("day01");
    }
    catch (const exception& ex)
    {
        cout << "Exception happened: " << ex.what() << endl;
        return 1;
    }

    return 0;
}

void solve(string puzzle)
{
    string filename = puzzle+".txt";

    FileReader fileReader(filename);
    cout << fileReader.readOneLine() << endl;
}
