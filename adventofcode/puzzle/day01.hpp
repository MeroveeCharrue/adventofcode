//
//  day01.hpp
//  adventofcode
//
//  Created by Merovee Charrue on 07/12/2019.
//  Copyright © 2019 Merovee Charrue. All rights reserved.
//

#ifndef day01_hpp
#define day01_hpp

#include <stdio.h>
#include "fileReader.hpp"
#include "puzzle.hpp"

class Day01: public Puzzle {
private:
    int getMass();
    int calculeForOneModule();
    int calculateFuel(int);
public:
    Day01();
    std::string solve();
};

#endif /* day01_hpp */
