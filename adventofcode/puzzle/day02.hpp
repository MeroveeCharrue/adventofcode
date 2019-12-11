//
//  day02.hpp
//  adventofcode
//
//  Created by Merovee Charrue on 09/12/2019.
//  Copyright © 2019 Merovee Charrue. All rights reserved.
//

#ifndef day02_hpp
#define day02_hpp

#include <stdio.h>
#include <vector>
#include "puzzle.hpp"

struct Instruction {
    int opcode;
    int inputA;
    int inputB;
    int output;
};

class Day02: public Puzzle {
private:
    std::vector<int> intcode;
    int index;
    int solveDayTwoPartTwo();
    void restore1202ProgramAlarm();
    int executeIntcode();
    void loadIntcodeInMemory();
    void resetProgram();
    void setNounAndVerb(int, int);
    Instruction readOneInstruction();
public:
    Day02();
    std::string solve();
};

#endif /* day02_hpp */
