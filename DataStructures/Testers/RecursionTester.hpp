//
//  RecursionTester.hpp
//  DataStructures
//
//  Created by Heaps, Dane on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef RecursionTester_hpp
#define RecursionTester_hpp

#include <iostream>
#include <string>
#include "../Controller/Tools/Timer.hpp"

using namespace std;

class RecursionTester
{
private:
    int fib(int start);
    string mystery(string word);
    string myOwnTest(string alpha);
public:
    void testRecursionNumbers();
    void testRecursionString();
    void testMyTest();
};

#endif /* RecursionTester_hpp */
