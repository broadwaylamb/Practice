//
//  Problem8.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 22.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Problem8_hpp
#define Problem8_hpp

#include "Anode.hpp"

template <class T>
void deleteFirstChild(ANode<T> *&root) {
    if (root == nullptr) return;
    ANode<T> *firstChild = root -> down;
    ANode<T> *secondChild;
    ANode<T> *firstGrandchild;
    ANode<T> *lastGrandchild;
    
    if (firstChild == nullptr) return;
    secondChild = firstChild -> right;
    
    if (firstChild -> down == nullptr) {
        delete root -> down;
        root -> down = secondChild;
        return;
    }

    ANode<T> *t = firstChild -> down;
    firstGrandchild = t;
    while (t -> right != nullptr) {
        t = t -> right;
    }
    lastGrandchild = t;
    delete root -> down;
    root -> down = firstGrandchild;
    lastGrandchild -> right = secondChild;
    
}

#endif /* Problem8_hpp */
