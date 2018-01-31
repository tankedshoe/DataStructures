//
//  Controller.cpp
//  DataStructures
//
//  Created by Heaps, Dane on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Print to the screen some text" << endl;
    
    
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/dhea8398/Documents/datasucksures/DataStructures/DataStructures/Data/crime.csv");
    for (int loop=0; loop <30; loop++)
    {
        cout << "Spot #" << loop << ": " << myData[loop] << endl;
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
