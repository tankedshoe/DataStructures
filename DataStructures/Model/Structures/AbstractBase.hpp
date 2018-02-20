//
//  AbstractBase.hpp
//  DataStructures
//
//  Created by Heaps, Dane on 2/20/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef AbstractBase_hpp
#define AbstractBase_hpp

#include <assert.h>
#include "../../Nodes/LinearNode.hpp"

template <class type>
class AbstractBase
{
protected:
    int size;
public:
    //Structure
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    
    //Helper
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* AbstractBase_hpp */
