//
//  Problem2-5.hpp
//  Search Trees
//
//  Created by Sergej Jaskiewicz on 06.05.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef DSTree_hpp
#define DSTree_hpp

#include <iostream>
#include "DSNode.hpp"


// Problem 2
template <class T>
class DSTree {
    
private:
    DSNode<T> *root;
    
    void rDelete(DSNode<T> *&node) {
        if (node == nullptr) {
            return;
        }
        rDelete(node -> left);
        rDelete(node -> right);
        delete node;
        node = nullptr;
    }
    
    void rPrint(DSNode<T> *root, int offset = 0) {
        if(root == nullptr) return;
        rPrint(root -> right, offset + 5);
        for(int i = 0; i < offset; i++) std::cout<<" ";
        
        std::cout<<root -> key<<": "<<root -> data<<std::endl;
        
        rPrint(root -> left, offset + 5);
    }
    
    DSNode<T>* rSearch(DSNode<T> *root, int key, int level = 0) {
        if (root == nullptr) return nullptr;
        if (root -> key == key) return root;
        
        if (digit(key, level) == 0) {
            return rSearch(root -> left, key, level + 1);
        } else {
            return rSearch(root -> right, key, level + 1);
        }
    }
    
    void rInsert(DSNode<T> *&root, int level, int key, T data) {
        
    }
    
public:
    DSTree(): root(nullptr) {}
    
    ~DSTree() {
        rDelete(root);
    }
    
    
    // Problem 3
    void print() {
        rPrint(root);
    }
    
    DSNode<T>* search(int key) {
        return rSearch(root, key);
    }
    
    void insert(int key, T data) {
        rInsert(root, 0, key, data);
    }
};

#endif /* DSTree_hpp */
