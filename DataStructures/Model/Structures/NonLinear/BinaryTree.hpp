//
//  BinaryTree.hpp
//  DataStructures
//
//  Created by Heaps, Dane on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <assert>
#include "../Model/Nodes/Node.hpp"

template <class Type>
class BinaryTree
{
private:
    Type root : BinaryTreeNode<Type> *;
    Type left : BinaryTreeNode<Type> *;
    Type right : BinaryTreeNode<Type> *;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    void getRoot() : BinaryTreeNode<Type> *;
    void getLeft() : BinaryTreeNode<Type> *;
    void getRight() : BinaryTreeNode<Type> *;
    void setRoot(BinaryTreeNode<Type> *);
    void setLeft(BinaryTreeNode<Type> *);
    void setRight(BinaryTreeNode<Type> *);
    
    };

#endif /* BinaryTree_hpp */
