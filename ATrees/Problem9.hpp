//
//  Problem9.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 22.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Problem9_hpp
#define Problem9_hpp

#include "ANode.hpp"

template <class T>
void flatten1(ANode<T> *root) {
    if (root == nullptr || root -> down == nullptr) return;
    
    ANode<T> *previousChild = nullptr;
    ANode<T> *currentChild = root -> down;
    ANode<T> *nextChild = root -> down -> right;
    ANode<T> *firstGrandchild = nullptr;
    ANode<T> *lastGrandchild = nullptr;
    
    while (currentChild != nullptr) {
        if (currentChild -> down == nullptr) {
            if (currentChild == root -> down) {
                delete root -> down;
                root -> down = nextChild;
            } else {
                delete previousChild -> right;
                previousChild -> right = nextChild;
            }
            if (nextChild != nullptr) {
                currentChild = nextChild;
                nextChild = currentChild -> right;
            }
            
        } else {
            
            ANode<T> *t = currentChild -> down;
            firstGrandchild = t;
            while (t -> right != nullptr) {
                t = t -> right;
            }
            if (currentChild == root -> down) {
                lastGrandchild = t;
                delete root -> down;
                root -> down = firstGrandchild;
                lastGrandchild -> right = nextChild;
            } else {
                lastGrandchild = t;
                delete previousChild -> right;
                previousChild -> right = firstGrandchild;
                lastGrandchild -> right = nextChild;
            }
            if (nextChild != nullptr) {
                currentChild = nextChild;
                nextChild = currentChild -> right;
                previousChild = lastGrandchild;
            } else {
                return;
            }
        }
    }
    
}

#endif /* Problem9_hpp */
