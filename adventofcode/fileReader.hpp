//
//  fileReader.hpp
//  adventofcode
//
//  Created by Merovee Charrue on 07/12/2019.
//  Copyright © 2019 Merovee Charrue. All rights reserved.
//

#ifndef fileReader_hpp
#define fileReader_hpp

#include <stdio.h>
#include <fstream>

class FileReader {
    std::ifstream inputFile;
public:
    FileReader(std::string);
    ~FileReader();
    std::string readOneLine();
};

#endif /* fileReader_hpp */
