//
//  BSTree.hpp
//  Search Trees
//
//  Created by Sergej Jaskiewicz on 13.05.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef BSTree_hpp
#define BSTree_hpp

#include "BSNode.hpp"

template <class S, class T>
class BSTree {
    
private:
    BSNode<S, T>* root;
    
    rDelete(BSNode<S, T> *&node) {
        if (node == nullptr) {
            return;
        }
        rDelete(node -> left);
        rDelete(node -> right);
        delete node;
        node = nullptr;
    }
    
public:
    BSTree(): root(nullptr) {}
    
    ~BSTree() {
        rDelete(root);
    }
    
    
};

#endif /* BSTree_hpp */
