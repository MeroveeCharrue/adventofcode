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
        sum += calculeForOneModule();
    }

    return to_string(sum);
}

int Day01::getMass()
{
    return fileReader.readOneInt();
}

int Day01::calculeForOneModule()
{
    int fuelTotalForThisModule = 0;
    int mass = getMass();

    int fuel = calculateFuel(mass);
    fuelTotalForThisModule += fuel;

    while (fuel > 0) {
        fuel = calculateFuel(fuel);
        fuelTotalForThisModule += fuel;
    }

    return fuelTotalForThisModule;
}

int Day01::calculateFuel(int mass)
{
    int fuel = (mass / 3) - 2;
    if (fuel <= 0 ) fuel = 0;
    return fuel;
}

// This was for part one of this day.
// But it had to evolve ;)
//int Day01::calculateFuel()
//{
//    return (getMass() / 3) - 2;
//}
