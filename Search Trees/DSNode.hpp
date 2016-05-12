//
//  DSNode.hpp
//  Search Trees
//
//  Created by Sergej Jaskiewicz on 06.05.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef DSNode_hpp
#define DSNode_hpp

// Problem 1
template <class T>
class DSNode {
    int key;
    T data;
    DSNode<T> *left, *right;
};

#endif /* DSNode_hpp */
