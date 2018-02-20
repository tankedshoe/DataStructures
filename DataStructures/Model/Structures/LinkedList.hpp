//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Heaps, Dane on 2/20/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <iostream>
#include <assert.h>
#include "AbstractBase.hpp"
#include "LinearNode.hpp"

template <class Type>
class LinkedList: public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    
    //Destructor
    virtual ~LinkedList(); //Virtual so it can be overridden.
    
    //Helper methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    //Structure Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
    //    Type setAtIndex(int index, Type item);
    //    bool contains(Type item);
};

template <class Type>
LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;
    this->end = nullptr;
    this->size = 0;
}

#endif /* LinkedList_hpp */
