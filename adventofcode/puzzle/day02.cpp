//
//  day02.cpp
//  adventofcode
//
//  Created by Merovee Charrue on 09/12/2019.
//  Copyright © 2019 Merovee Charrue. All rights reserved.
//

#include "day02.hpp"

Day02::Day02(): Puzzle("day02")
{
    index = 0;
}

std::string Day02::solve()
{
    int output;

    loadIntcodeInMemory();
    restore1202ProgramAlarm();
    output = executeIntcode();

//    // Part one
//    return to_string(output);

    // Part two
    int hundredTimesNounPlusVerb = solveDayTwoPartTwo();

    return std::to_string(hundredTimesNounPlusVerb);
}

int Day02::solveDayTwoPartTwo()
{
    const int expectedOutput = 19690720;

    for (int noun = 0; noun <= 99; noun++) {
        for (int verb = 0; verb <= 99; verb++) {
            loadIntcodeInMemory();
            setNounAndVerb(noun, verb);
            int output = executeIntcode();

            if (output == expectedOutput) {
                return 100 * noun + verb;
            }
        }
    }

    return 0;
}

void Day02::restore1202ProgramAlarm()
{
    setNounAndVerb(12, 2);
}

// Following stuff should be in dedicated Intcode class.

int Day02::executeIntcode()
{
    while (index < intcode.size()) {
        const Instruction ic = readOneInstruction();

        if (ic.opcode == 99) {
            break;
        }

        if (ic.opcode == 1) {
            intcode.at(ic.output) = intcode.at(ic.inputA) + intcode.at(ic.inputB);
        } else if (ic.opcode == 2) {
            intcode.at(ic.output) = intcode.at(ic.inputA) * intcode.at(ic.inputB);
        }
    }

    return intcode.at(0);
}

void Day02::loadIntcodeInMemory()
{
    resetProgram();
    while (!fileReader.isEof()) {
        intcode.push_back(
            stoi(fileReader.readOneLine(','))
        );
    }
}

void Day02::resetProgram()
{
    fileReader.resetFileReader();
    intcode.clear();
    index = 0;
}

void Day02::setNounAndVerb(int noun, int verb)
{
    intcode.at(1) = noun;
    intcode.at(2) = verb;
}

Instruction Day02::readOneInstruction()
{
    Instruction ic;
    ic.opcode = intcode.at(index++);
    if (ic.opcode != 99) {
        ic.inputA = intcode.at(index++);
        ic.inputB = intcode.at(index++);
        ic.output = intcode.at(index++);
    }

    return ic;
}
