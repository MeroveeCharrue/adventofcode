//
//  day01.cpp
//  adventofcode
//
//  Created by Merovee Charrue on 07/12/2019.
//  Copyright © 2019 Merovee Charrue. All rights reserved.
//

#include "day01.hpp"

using namespace std;

Day01::Day01(): Puzzle("day01")
{
}

string Day01::solve()
{
    int sum = 0;
    while (!fileReader.isEof()) {
        sum += calculateFuel();
    }

    return to_string(sum);
}

int Day01::getMass()
{
    return fileReader.readOneInt();
}

int Day01::calculateFuel()
{
    return (getMass() / 3) - 2;
}
