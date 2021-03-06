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
    
    void rDelete(DSNode<T> *&node) {
        if (node == nullptr) {
            return;
        }
        rDelete(node -> left);
        rDelete(node -> right);
        delete node;
        node = nullptr;
    }
    
    void rPrint(DSNode<T> *root, bool printKeys, int offset = 0) {
        if(root == nullptr) return;
        rPrint(root -> right, printKeys, offset + 5);
        for(int i = 0; i < offset; i++) std::cout<<" ";
        if (printKeys) {
            std::cout<<root -> key<<": ";
        }
        std::cout<<root -> data<<std::endl;
        
        rPrint(root -> left, printKeys, offset + 5);
    }
    
    DSNode<T>** rSearch(DSNode<T> *&root, int key, int level = 0) {
        if (root == nullptr) return nullptr;
        if (root -> key == key) return &root;
        
        if (digit(key, level) == 0) {
            return rSearch(root -> left, key, level + 1);
        } else {
            return rSearch(root -> right, key, level + 1);
        }
    }
    
    void rInsert(DSNode<T> *&root, int level, int key, T data) {
        if (root == nullptr) {
            root = new DSNode<T>();
            root -> key = key;
            root -> data = data;
            return;
        }
        if (root -> key == key) {
            root -> data = data;
        }
        if (digit(key, level) == 0) {
            rInsert(root -> left, level + 1, key, data);
        } else {
            rInsert(root -> right, level + 1, key, data);
        }
    }
    
    DSNode<T>** leftmostLeaf(DSNode<T> *&root) {
        if (root == nullptr) return nullptr;
        if (root -> left == nullptr) return &root;
        else return leftmostLeaf(root -> left);
    }
    
    bool rCheck(DSNode<T> *root, int level = 0) {
        if (root == nullptr) {
            return true;
        }
        if (root -> left == nullptr || root -> right == nullptr) {
            return true;
        }
        if (digit(root -> left -> key, level) != 0) {
            return false;
        }
        if (digit(root -> right -> key, level) != 1) {
            return false;
        }
        bool leftCheck = rCheck(root -> left, level + 1);
        bool rightCheck = rCheck(root -> right, level + 1);
        return leftCheck && rightCheck;
    }
    
public:
    DSNode<T> *root;
    DSTree(): root(nullptr) {}
    
    ~DSTree() {
        rDelete(root);
    }
    
    
    // Problem 3
    void print(bool printKeys) {
        rPrint(root, printKeys);
    }
    
    // Problem 4
    DSNode<T>* search(int key) {
        return rSearch(root, key);
    }
    
    // Problem 4
    void insert(int key, T data) {
        rInsert(root, 0, key, data);
    }
    
    // Problem 5
    void del(int key) {
        DSNode<T> **nodeToDelete = rSearch(root, key);
        if ((*nodeToDelete) -> left == nullptr && (*nodeToDelete) -> right == nullptr) {
            delete *nodeToDelete;
            *nodeToDelete = nullptr;
            return;
        }
        
        DSNode<T> **leaf = leftmostLeaf(root);
        (*nodeToDelete) -> data = (*leaf) -> data;
        delete *leaf;
        *leaf = nullptr;
    }
    
    // Test 1
    bool check() {
        return rCheck(root);
    }
};

#endif /* DSTree_hpp */
