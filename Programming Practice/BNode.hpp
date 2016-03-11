//
//  BNode.hpp
//  Programming Practice
//
//  Created by Sergej Jaskiewicz on 11.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef BNode_hpp
#define BNode_hpp

#include <stdio.h>

#endif /* BNode_hpp */


template <class T>
struct BNode {
    T data;
    BNode<T> *left, *right;
    BNode(T dd, BNode<T> *l = nullptr, BNode<T> *r = nullptr): data(dd), left(l), right(r) {}
};