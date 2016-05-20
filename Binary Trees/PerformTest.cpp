//
//  PerformTest.cpp
//  Binary Trees
//
//  Created by Sergej Jaskiewicz on 18.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#include "PerformTest.hpp"

using namespace std;

static void problemHeader(int problemNumber) {
    cout<<"Problem "<<problemNumber<<" solution:"<<endl<<endl;
}

static void problemFooter() {
    cout<<endl<<"--------"<<endl<<endl;
}


void performTest(int problemNumber) {
    switch (problemNumber) {
        case 1: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2,
                                                             new BNode<int>(4),
                                                             new BNode<int>(5)),
                                              new BNode<int>(3,
                                                             new BNode<int>(6)));
            printTree(tree);
            cout<<endl<<"The rightmost grandchild of the tree is: "<<rightmostGrandchild(tree) -> data;
            
            problemFooter();
            break;
        }
        case 2: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2,
                                                             new BNode<int>(4),
                                                             new BNode<int>(5)),
                                              new BNode<int>(3,
                                                             new BNode<int>(6)));
            printTree(tree);
            cout<<endl<<"The number of grandchildren of the root is: "<<countGrandChildren(tree);
            
            problemFooter();
            break;
        }
        case 3: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                               new BNode<int>(2,
                                                              new BNode<int>(3),
                                                              new BNode<int>(4)));
            printTree(tree);
            replaceRootWithLeftSon(tree);
            cout<<endl<<"The new tree:"<<endl<<endl;
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 4: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2,
                                                             new BNode<int>(3),
                                                             new BNode<int>(4)));
            replaceRootWithLeftSon(tree);
            printTree(tree);
            insertNewRootWithData(tree, 1);
            cout<<endl<<"The new tree:"<<endl<<endl;
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 5: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2),
                                              new BNode<int>(3));
            printTree(tree);
            insertLeftChildBetween(tree, 4);
            cout<<endl<<"The new tree:"<<endl<<endl;
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 6: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2),
                                              new BNode<int>(3));
            printTree(tree);
            
            insertLeftChildAsAdopter(tree, 4);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 7: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2,
                                                             new BNode<int>(4),
                                                             new BNode<int>(5)),
                                              new BNode<int>(3));
            printTree(tree);
            
            swapRootAndLeftChild(tree);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 8: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2),
                                              new BNode<int>(3,
                                                             new BNode<int>(4),
                                                             new BNode<int>(5)));
            
            printTree(tree);
            
            leftRotation(tree);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 9: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2),
                                              new BNode<int>(3,
                                                             new BNode<int>(4),
                                                             new BNode<int>(5)));
            
            printTree(tree);
        
            cout<<"The leftmost node of the tree is: "<<(*leftmostNode(tree)) -> data<<endl;
            
            problemFooter();
            break;
        }
        case 10: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2,
                                                             new BNode<int>(3),
                                                             new BNode<int>(4)),
                                              new BNode<int>(5,
                                                             new BNode<int>(6,
                                                                            new BNode<int>(7),
                                                                            new BNode<int>(10,
                                                                                           new BNode<int>(11),
                                                                                           new BNode<int>(12))),
                                                             new BNode<int>(8,
                                                                            new BNode<int>(8),
                                                                            new BNode<int>(9))));
            
            printTree(tree);
            
            cout<<"The result is: "<<stepRightStepLeft(tree) -> data<<endl;
            
            problemFooter();
            break;
        }
        case 11: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2,
                                                             new BNode<int>(3),
                                                             new BNode<int>(4)),
                                              new BNode<int>(5,
                                                             new BNode<int>(6,
                                                                            new BNode<int>(7),
                                                                            new BNode<int>(10,
                                                                                           new BNode<int>(11),
                                                                                           new BNode<int>(12))),
                                                             new BNode<int>(8,
                                                                            new BNode<int>(8),
                                                                            new BNode<int>(9))));
            
            printTree(tree);
            
            cout<<"The leftmost leaf is: "<<(*leftmostLeaf(tree)) -> data<<endl;
            
            problemFooter();
            break;
        }
        case 12: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2,
                                                             nullptr,
                                                             new BNode<int>(4)),
                                              new BNode<int>(5,
                                                             new BNode<int>(6,
                                                                            new BNode<int>(7),
                                                                            new BNode<int>(10,
                                                                                           new BNode<int>(11),
                                                                                           new BNode<int>(12))),
                                                             new BNode<int>(8,
                                                                            new BNode<int>(8),
                                                                            new BNode<int>(9))));
            
            printTree(tree);
            
            cout<<"The second leaf from left is: "<<(*secondFromLeftLeaf(tree)) -> data<<endl;
            
            problemFooter();
            break;
        }
        case 13: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2),
                                              new BNode<int>(3,
                                                             new BNode<int>(4),
                                                             new BNode<int>(5)));
            
            printTree(tree);
            
            insertLeftChildForLeftmostNode(tree, 6);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 14: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2,
                                                                new BNode<int>(3,
                                                                               nullptr,
                                                                               new BNode<int>(4,
                                                                                              new BNode<int>(5),
                                                                                              new BNode<int>(6))),
                                                             new BNode<int>(7)),
                                              new BNode<int>(8));
            
            printTree(tree);
            
            cout<<endl<<"The leftmost node of the tree is: "<<(*leftmostNode(tree)) -> data<<endl;
            
            deleteLeftmostNode(tree);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 15: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2,
                                                             nullptr,
                                                             new BNode<int>(4)),
                                              new BNode<int>(5,
                                                             new BNode<int>(6,
                                                                            new BNode<int>(7),
                                                                            new BNode<int>(10,
                                                                                           new BNode<int>(11),
                                                                                           new BNode<int>(12))),
                                                             new BNode<int>(8,
                                                                            new BNode<int>(8),
                                                                            new BNode<int>(9))));
            
            printTree(tree);
            
            cout<<"The leftmost leaf is: "<<(*leftmostLeaf(tree)) -> data<<endl;
            
            deleteLeftmostLeaf(tree);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 101: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2,
                                                             new BNode<int>(3,
                                                                            new BNode<int>(13,
                                                                                           new BNode<int>(15)),
                                                                            new BNode<int>(14)),
                                                             new BNode<int>(4)),
                                              new BNode<int>(5,
                                                             new BNode<int>(6,
                                                                            new BNode<int>(7),
                                                                            new BNode<int>(10,
                                                                                           new BNode<int>(11),
                                                                                           new BNode<int>(12))),
                                                             new BNode<int>(8,
                                                                            new BNode<int>(8),
                                                                            new BNode<int>(9))));
            
            printTree(tree);
            
            cout<<"The third from left node is: "<<left3(tree) -> data<<endl;
            
            problemFooter();
            break;
        }
        case 102: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2,
                                                             new BNode<int>(3,
                                                                            new BNode<int>(13,
                                                                                           new BNode<int>(15)),
                                                                            new BNode<int>(14)),
                                                             new BNode<int>(4)),
                                              new BNode<int>(5,
                                                             new BNode<int>(6,
                                                                            new BNode<int>(7),
                                                                            new BNode<int>(10,
                                                                                           new BNode<int>(11),
                                                                                           new BNode<int>(12))),
                                                             new BNode<int>(8,
                                                                            new BNode<int>(8),
                                                                            new BNode<int>(9))));
            
            printTree(tree);
            
            chh(tree);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 104: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2,
                                                             new BNode<int>(3),
                                                             new BNode<int>(4)),
                                              new BNode<int>(5,
                                                             new BNode<int>(6,
                                                                            new BNode<int>(7),
                                                                            new BNode<int>(10,
                                                                                           new BNode<int>(11),
                                                                                           new BNode<int>(12))),
                                                             new BNode<int>(8,
                                                                            new BNode<int>(8),
                                                                            new BNode<int>(9))));
            
            printTree(tree);
            
            cout<<"The product is: "<<mult1(tree)<<endl;
            
            problemFooter();
            break;
        }
        default:
            cout<<"No such problem"<<endl;
            break;
    }
}