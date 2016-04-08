//
//  Problem4.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 08.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Problem4_hpp
#define Problem4_hpp

#include "ANode.hpp"

template <class T>
void flatten1(ANode<T> *&root) {
    if (root == nullptr || root -> down == nullptr) return;
    ANode<T> *t = root -> down -> down;
    while (t -> right != nullptr) {
        t = t-> right;
    }
    t -> right = root -> down -> right;
    delete root -> down;
    root -> down = root -> down -> down;
}

#endif /* Problem4_hpp */
