//
//  RecursionTester.cpp
//  DataStructures
//
//  Created by Heaps, Dane on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "RecursionTester.hpp"

int RecursionTester :: fib(int number)
{
    if (number == 0 || number == 1)
    {
        cout << "reached a base case" << endl;
        return 1;
    }
    else
    {
        cout << "calling fib with:" << number - 1 << " and " << number - 2 << endl;
        return fib (number - 1) + fib (number - 2);
    }
    
}

string RecursionTester :: mystery(string word)
{
    return "";
}

void RecursionTester :: testRecursionNumbers()
{
    Timer recursionTimer;
    cout << "testing fibonacci with 10" << endl;
    recursionTimer.startTimer();
    cout << fib(10) << endl;
    recursionTimer.stopTimer();
    recursionTimer.displayInformation();
}

void RecursionTester :: testRecursionString()
{
    
}

string RecursionTester :: myOwnTest(string alpha)
{
    if (alpha.length() >= 10)
    {
        cout << alpha << endl;
        return alpha;
    }
    else
    {
        cout << alpha << alpha.substr(0, 1) << endl;
        return alpha + myOwnTest(alpha.substr(0, 1));
    }
}

void RecursionTester :: testMyTest()
{
    myOwnTest("but");
}

