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
    
    void rInsert(DSNode<T> *&node, int level, int key, T data) {
        if (node == nullptr) {
            node = new DSNode<T>();
            node -> key = key;
            node -> data = data;
            return;
        }
        if (node -> key == key) {
            node -> data = data;
        }
        if (digit(key, level) == 0) {
            rInsert(node -> left, level + 1, key, data);
        } else {
            rInsert(node -> right, level + 1, key, data);
        }
    }
    
    DSNode<T>** leftmostLeaf(DSNode<T> *&root) {
        if (root == nullptr) return &root;
        if (root -> left == nullptr && root -> right == nullptr) return &root;
        if (root -> left != nullptr) return leftmostLeaf(root -> left);
        else return leftmostLeaf(root -> right);
    }
    
    void rNeg(DSNode<T> *root) {
        if (root == nullptr) {
            return;
        }
        root -> key = ~(root -> key);
        
        DSNode<T> *t = root -> left;
        root -> left = root -> right;
        root -> right = t;
        
        rNeg(root -> left);
        rNeg(root -> right);
    }
    
public:
    DSNode<T> *root;
    DSTree(): root(nullptr) {}
    
    ~DSTree() {
        rDelete(root);
    }
    
    void print(bool printKeys) {
        rPrint(root, printKeys);
    }
    
    DSNode<T>* search(int key) {
        return rSearch(root, key);
    }

    void insert(int key, T data) {
        rInsert(root, 0, key, data);
    }
    
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
    
    void neg() {
        rNeg(root);
    }
    
    void delEven() {
        if (root == nullptr) {
            return;
        }
        rDelete(root -> left);
        
        if (root -> key % 2 == 0) {
            del(root -> key);
        }
    }
};

#endif /* DSTree_hpp */
