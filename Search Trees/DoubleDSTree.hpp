//
//  DoubleDSTree.hpp
//  Search Trees
//
//  Created by Sergej Jaskiewicz on 24.05.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef DoubleDSTree_hpp
#define DoubleDSTree_hpp

inline int digit(double x, int n) {
    long long *cast = reinterpret_cast<long long*>(&x);
    return (*cast >> n) & 1;
}

template <class T>
class DoubleDSNode {
    public:
    double key;
    T data;
    DoubleDSNode<T> *left, *right;
};

template <class T>
class DoubleDSTree {
    
private:
    
    void rDelete(DoubleDSNode<T> *&node) {
        if (node == nullptr) {
            return;
        }
        rDelete(node -> left);
        rDelete(node -> right);
        delete node;
        node = nullptr;
    }
    
    void rPrint(DoubleDSNode<T> *root, bool printKeys, int offset = 0) {
        if(root == nullptr) return;
        rPrint(root -> right, printKeys, offset + 10);
        for(int i = 0; i < offset; i++) std::cout<<" ";
        if (printKeys) {
            std::cout<<root -> key<<": ";
        }
        std::cout<<root -> data<<std::endl;
        
        rPrint(root -> left, printKeys, offset + 10);
    }
    
    DoubleDSNode<T>** rSearch(DoubleDSNode<T> *&root, double key, int level = 0) {
        if (root == nullptr) return nullptr;
        if (root -> key == key) return &root;
        
        if (digit(key, level) == 0) {
            return rSearch(root -> left, key, level + 1);
        } else {
            return rSearch(root -> right, key, level + 1);
        }
    }
    
    void rInsert(DoubleDSNode<T> *&node, int level, double key, T data) {
        if (node == nullptr) {
            node = new DoubleDSNode<T>();
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
    
    DoubleDSNode<T>** leftmostLeaf(DoubleDSNode<T> *&root) {
        if (root == nullptr) return &root;
        if (root -> left == nullptr && root -> right == nullptr) return &root;
        if (root -> left != nullptr) return leftmostLeaf(root -> left);
        else return leftmostLeaf(root -> right);
    }
    
    void rNeg(DoubleDSNode<T> *root) {
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
    DoubleDSNode<T> *root;
    DoubleDSTree(): root(nullptr) {}
    
    ~DoubleDSTree() {
        rDelete(root);
    }
    
    void print(bool printKeys) {
        rPrint(root, printKeys);
    }
    
    DoubleDSNode<T>* search(double key) {
        return rSearch(root, key);
    }
    
    void insert(double key, T data) {
        rInsert(root, 0, key, data);
    }
    
    void del(double key) {
        DoubleDSNode<T> **nodeToDelete = rSearch(root, key);
        if ((*nodeToDelete) -> left == nullptr && (*nodeToDelete) -> right == nullptr) {
            delete *nodeToDelete;
            *nodeToDelete = nullptr;
            return;
        }
        
        DoubleDSNode<T> **leaf = leftmostLeaf(root);
        (*nodeToDelete) -> data = (*leaf) -> data;
        delete *leaf;
        *leaf = nullptr;
    }
};

#endif /* DoubleDSTree_hpp */
