//
//  Problem1.hpp
//  ATrees
//
//  Created by Sergej Jaskiewicz on 01.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, возвращающую число внуков корня.
 */

#ifndef Problem1_hpp
#define Problem1_hpp

#include "ANode.hpp"

template <class T>
int countGrandChildren(ANode<T> *root) {
    if (root == nullptr) return 0;
    int n = 0;

    ANode<T>* t = root -> down;
    while (t != nullptr) {
        n += countChildren(t);
        t = t -> right;
    }
    return n;
}

#endif /* Problem1_hpp */
