//
//  day02.cpp
//  adventofcode
//
//  Created by Merovee Charrue on 09/12/2019.
//  Copyright © 2019 Merovee Charrue. All rights reserved.
//

#include "day02.hpp"

using namespace std;

Day02::Day02(): Puzzle("day02")
{
}

string Day02::solve()
{
    return fileReader.readOneLine(',');
}
