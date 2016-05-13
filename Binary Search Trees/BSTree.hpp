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
    
    void rDelete(BSNode<S, T> *&node) {
        if (node == nullptr) {
            return;
        }
        rDelete(node -> left);
        rDelete(node -> right);
        delete node;
        node = nullptr;
    }
    
    BSNode<S, T>* leftmostNode(BSNode<S, T> *root) {
        if (root == nullptr) return nullptr;
        if (root -> left == nullptr) return root;
        return leftmostNode(root -> left);
    }
    
public:
    BSTree(): root(nullptr) {}
    
    ~BSTree() {
        rDelete(root);
    }
    
    BSNode<S, T>* next(BSNode<S, T>* node) {
        if (node == nullptr) {
            return nullptr;
        }
        if (node -> right == nullptr) {
            if (node -> up -> left == node) {
                return node -> up;
            } else {
                return  nullptr;
            }
        }
        return leftmostNode(node -> right);
    }
};

#endif /* BSTree_hpp */
