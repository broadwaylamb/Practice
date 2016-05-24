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
    
    BSNode<S, T>* rSearch(BSNode<S, T> *&root, int key) {
        if (root == nullptr) return nullptr;
        if (root -> key == key) return root;
        
        if (key < root -> key) {
            return rSearch(root -> left, key);
        } else {
            return rSearch(root -> right, key);
        }
    }
    
    void rInsert(BSNode<S, T> *node, S key, T data) {
        if (node == nullptr) {
            node = new BSNode<S, T>();
            node -> key = key;
            node -> data = data;
            return;
        }
        if (node -> key == key) {
            node -> data = data;
        }
        if (key < node -> key) {
            rInsert(node -> left, key, data);
        } else {
            rInsert(node -> right, key, data);
        }
    }
    
public:
    BSTree(): root(nullptr) {}
    
    ~BSTree() {
        rDelete(root);
    }
    
    BSNode<S, T>* search(S key) {
        return rSearch(root, key);
    }
    
    void insert(S key, T data) {
        rInsert(root, key, data);
    }
};

#endif /* BSTree_hpp */
