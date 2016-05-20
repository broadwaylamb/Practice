//
//  Test_d2.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 20.05.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Test_d2_hpp
#define Test_d2_hpp

#include "BNode.hpp"

template <class T>
void chh(BNode<T> *root) {
    if (root == nullptr ||
        root -> left == nullptr ||
        root -> right == nullptr) {
        
        return;
    }
    BNode<T> *ll = root -> left -> left;
    BNode<T> *lr = root -> left -> right;
    BNode<T> *rl = root -> right -> left;
    BNode<T> *rr = root -> right -> right;
    
    root -> left -> left = rr;
    root -> right -> right = ll;
    root -> left -> right = rl;
    root -> right -> left = lr;
}

#endif /* Test_d2_hpp */
