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
    
};

template <class Type>
LinkedList<CrimeData> FileController :: readDataToList(string fileName)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //If the file exists at that path.
    if (dataFile.is_open())
    {
        //Keep reading until you are at the end of the file.
        while (!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine, '\r');
            //Exclude header row
            if (rowCount != 0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened seperately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimes;

#endif /* FileController_hpp */
