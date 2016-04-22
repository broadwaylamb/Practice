//
//  Problem4.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 11.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, возвращающую указатель на узел, полученный из корня последовательными перемещениями вниз в сына с заданным номером (последовательность номеров хранится в массиве, который передаётся в качестве параметра).
 */

#ifndef Problem4_hpp
#define Problem4_hpp

#include "ANode.hpp"

template <class T>
ANode<T>* lookUp(ANode<T> *root, int lookUpArray[], int depth, int level = 0) {
    if (root == nullptr) return nullptr;
    ANode<T> *t = root -> down;
    int i = 1;
    
    while (t != nullptr) {
        if (i == lookUpArray[level]) {
            if (level == depth - 1) {
                return t;
            }
            return lookUp(t, lookUpArray, depth, level + 1);
        }
        i++;
        t = t -> right;
    }
    
    return nullptr;
}

#endif /* Problem4_hpp */
