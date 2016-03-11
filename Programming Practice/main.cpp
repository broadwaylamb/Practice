//
//  main.cpp
//  Programming Practice
//
//  Created by Sergej Jaskiewicz on 11.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#include "BNode.hpp"

#include "Problem1.hpp"
#include "Problem2.hpp"
#include "Problem3.hpp"
#include "Problem4.hpp"

using namespace std;

void problemHeader(int problemNumber) {
    cout<<"Problem "<<problemNumber<<" solution:"<<endl<<endl;
}
void problemFooter() {
    cout<<endl<<"--------"<<endl<<endl;
}

int main() {
    
    BNode<int> *tree = new BNode<int>(1,
                                       new BNode<int>(2,
                                                      new BNode<int>(4),
                                                      new BNode<int>(5)),
                                       new BNode<int>(3,
                                                      new BNode<int>(6)));
    
    // MARK: Problem 1
    problemHeader(1);
    
    printTree(tree);
    cout<<endl<<"The rightmost grandchild of the tree is: "<<rightmostGrandchild(tree) -> data;
    
    problemFooter();
    
    // MARK: Problem 2
    problemHeader(2);
    
    printTree(tree);
    cout<<endl<<"The number of grandchildren of the root is: "<<countGrandchildren(tree);
    
    problemFooter();
    
    // MARK: Problem 3
    problemHeader(3);
    
    BNode<int> *tree1 = new BNode<int>(1,
                                       new BNode<int>(2,
                                                      new BNode<int>(3),
                                                      new BNode<int>(4)));
    printTree(tree1);
    replaceRootWithLeftSon(tree1);
    cout<<endl<<"The new tree:"<<endl<<endl;
    printTree(tree1);
    
    problemFooter();
    
    // MARK: Problem 4
    problemHeader(4);
    
    printTree(tree1);
    insertNewRootWithData(tree1, 1);
    cout<<endl<<"The new tree:"<<endl<<endl;
    printTree(tree1);
    
    problemFooter();
    
    // MARK: Problem 5
    
    return 0;
}
