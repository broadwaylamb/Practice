//
//  Test_d3.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 20.05.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Test_d4_hpp
#define Test_d4_hpp

#include "BNode.hpp"

template <class T>
T mult1(BNode<T> *root) {
    if (root == nullptr) {
        return T(1);
    }
    
    if (root -> left != nullptr && root -> right != nullptr) {
        return (root -> data) * mult1(root -> left) * mult1(root -> right);
    }
    
    return mult1(root -> left) * mult1(root -> right);
}

#endif /* Test_d4_hpp */
