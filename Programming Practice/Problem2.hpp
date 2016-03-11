//
//  Problem2.hpp
//  Programming Practice
//
//  Created by Sergej Jaskiewicz on 11.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 
 Написать функцию, принимающую в качестве параметра дерево и возвращающую число внуков корня (если дерево пустое или у корня нет внуков, вернуть 0).
 
 */

#include "BNode.hpp"

#ifndef Problem2_hpp
#define Problem2_hpp

template <class T>
int countGrandchildren(BNode<T> *root) {
    int n = 0;
    if (root == nullptr) return n;
    if (root -> left != nullptr)
        n += countChildren(root -> left);
    if (root -> right != nullptr)
        n += countChildren(root -> right);
    return n;
}

#endif