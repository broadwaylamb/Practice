//
//  Test_4.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 20.05.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Test_4_hpp
#define Test_4_hpp

#include "ANode.hpp"

template <class T>
void move(ANode<T> *root) {
    if (root == nullptr || root -> down == nullptr) {
        return;
    }
    
    ANode<T> *lastNode = root -> down; // Last child of the root
    ANode<T> *lboNode = root -> down; // Last but one child of the root
    
    while (lastNode -> right != nullptr) {
        lboNode = lastNode;
        lastNode = lastNode -> right;
    }
    
    ANode<T> *secondChild = root -> down;
    root -> down = lastNode;
    root -> down -> right = secondChild;
    lboNode -> right = nullptr;
}

#endif /* Test_4_hpp */
