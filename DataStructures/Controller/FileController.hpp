//
//  FileController.hpp
//  DataStructures
//
//  Created by Heaps, Dane on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Data/CrimeData.hpp"
#include "../Model/Structures/Linear/LinkedList.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <stdio.h>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string fileName);
    
};

#endif /* FileController_hpp */
