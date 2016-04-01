//
//  Problem2.hpp
//  ATrees
//
//  Created by Sergej Jaskiewicz on 01.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, возвращающую указатель на первого сына корня с данными d1, у которого второй сын имеет данные d2 (d1 и d2 — параметры функции).
 */

#ifndef Problem2_hpp
#define Problem2_hpp

#include "ANode.hpp"

template <class T>
ANode<T>* lookUpFirstChildSecondGrandChild(ANode<T> *root, T d1, T d2) {
    if (root == nullptr || root -> down == nullptr) return nullptr;
    ANode<T> *t = root -> down;
    while (t != nullptr) {
        if (t -> data == d1 &&
            t -> down != nullptr &&
            t -> down -> right != nullptr &&
            t -> down -> right -> data == d2) {
            return t;
        }
        t = t -> right;
    }
    return nullptr;
}

#endif /* Problem2_hpp */
