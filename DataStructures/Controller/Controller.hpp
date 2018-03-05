//
//  Controller.hpp
//  DataStructures
//
//  Created by Heaps, Dane on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include "Tools/Timer.hpp"
#include "FileController.hpp"
#include "../Model/Structures/Linear/Array.hpp"
#include "../Testers/ArrayTester.hpp"
#include "../Testers/RecursionTester.hpp"
#include "../Testers/LinkedListTester.hpp"

#include <vector>
#include <iostream>

using namespace std;

class Controller
{
public:
    void start();
    void testStacksAndQueues();
    void findMaxAndMin();
    void testArray();
};

#endif /* Controller_hpp */
