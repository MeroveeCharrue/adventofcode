//
//  puzzle.hpp
//  adventofcode
//
//  Created by Merovee Charrue on 07/12/2019.
//  Copyright © 2019 Merovee Charrue. All rights reserved.
//

#ifndef puzzle_hpp
#define puzzle_hpp

#include "fileReader.hpp"

class Puzzle {
protected:
    FileReader fileReader;
public:
    Puzzle(const std::string&);
    virtual std::string solve() = 0; // pure virtual, means Puzzle is abstract.
};

#endif /* puzzle_hpp */
