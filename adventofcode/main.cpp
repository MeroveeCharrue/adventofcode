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
#include "day02.hpp"
#include "day03.hpp"

void solve(Puzzle*);

int main()
{
    Day01 day01;
    solve(&day01);

    Day02 day02;
    solve(&day02);

    Day03 day03;
    solve(&day03);

    return 0;
}

void solve(Puzzle* puzzle)
{
    std::cout << puzzle->solve() << '\n';
}
