//
//  Problem5.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 22.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Problem5_hpp
#define Problem5_hpp

#include "Anode.hpp"

template <class T>
ANode<T>* lookUpWithData(ANode<T> *root, T lookUpArray[], int depth, int level = 0) {
    if (root == nullptr) return nullptr;
    ANode<T> *t = root -> down;
    
    while (t != nullptr) {
        if (t -> data == lookUpArray[level]) {
            if (level == depth - 1) {
                return t;
            }
            return lookUpWithData(t, lookUpArray, depth, level + 1);
        }
        t = t -> right;
    }
    
    return nullptr;
}

#endif /* Problem5_hpp */
