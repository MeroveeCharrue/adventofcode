//
//  day01.cpp
//  adventofcode
//
//  Created by Merovee Charrue on 07/12/2019.
//  Copyright © 2019 Merovee Charrue. All rights reserved.
//

#include "day01.hpp"

Day01::Day01(): Puzzle("day01")
{
}

std::string Day01::solve()
{
    int sum = 0;
    while (!fileReader.isEof()) {
        sum += calculeForOneModule();
    }

    return std::to_string(sum);
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

    while (fuel > 0) {
        fuelTotalForThisModule += fuel;
        fuel = calculateFuel(fuel);
    }

    return fuelTotalForThisModule;
}

int Day01::calculateFuel(int mass)
{
    return (mass / 3) - 2;
}

// This was for part one of this day.
// But it had to evolve ;)
//int Day01::calculateFuel()
//{
//    return (getMass() / 3) - 2;
//}
