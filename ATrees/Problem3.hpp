//
//  Problem3.hpp
//  ATrees
//
//  Created by Sergej Jaskiewicz on 01.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, возвращающую указатель на первого сына корня с данными d1, у которого есть сын с данными d2 (d1 и d2 — параметры функции).
 */

#ifndef Problem3_hpp
#define Problem3_hpp

#include "ANode.hpp"

template <class T>
ANode<T>* lookUpFirstChildGrandChild(ANode<T> *root, T d1, T d2) {
    if (root == nullptr || root -> down == nullptr) return nullptr;
    ANode<T> *t1 = root -> down;
    while (t1 != nullptr) {
        if (t1 -> data == d1 && t1 -> down != nullptr) {
            ANode<T> *t2 = t1 -> down;
            while (t2 != nullptr) {
                if (t2 -> data == d2) return t1;
                else t2 = t2 -> right;
            }
        }
        t1 = t1 -> right;
    }
    return nullptr;
}

#endif /* Problem3_hpp */
