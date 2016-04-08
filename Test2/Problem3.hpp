//
//  Problem3.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 08.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Problem3_hpp
#define Problem3_hpp

#include "ANode.hpp"

template <class T>
ANode<T>* last_d(ANode<T> *root, T d) {
    if (root == nullptr || root -> down == nullptr) return nullptr;
    ANode<T> *t = root -> down;
    ANode<T> *exactlyThatNode = nullptr;
    while (t != nullptr) {
        if (t -> data == d) exactlyThatNode = t;
        t = t -> right;
    }
    return exactlyThatNode;
}

#endif /* Problem3_hpp */
