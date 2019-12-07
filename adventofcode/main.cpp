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
#include "puzzle.hpp"
#include "day01.hpp"

using namespace std;

void solve(Puzzle*);

int main()
{
    try {
        Day01 day01;
        solve(&day01);
    }
    catch (const exception& ex)
    {
        cout << "Exception happened: " << ex.what() << endl;
        return 1;
    }

    return 0;
}

void solve(Puzzle* puzzle)
{
    cout << puzzle->solve() << endl;
}
