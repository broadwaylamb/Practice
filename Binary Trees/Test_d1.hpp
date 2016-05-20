//
//  Test_d1.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 20.05.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Test_d1_hpp
#define Test_d1_hpp

#include "BNode.hpp"

template <class T>
BNode<T>* left3(BNode<T> *root) {
    if (root == nullptr) {
        return  nullptr;
    }
    
    BNode<T> *t = root;
    for (int i = 0; i < 3; i++) {
        if (t -> left != nullptr) {
            t = t -> left;
        } else {
            return nullptr;
        }
    }
    return t;
}

#endif /* Test_d1_hpp */
