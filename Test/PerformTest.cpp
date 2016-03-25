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
                                                           nullptr,
                                                           new BNode<int>(3)),
                                              new BNode<int>(4,
                                                           nullptr,
                                                           new BNode<int>(5,
                                                                          new BNode<int>(6),
                                                                          new BNode<int>(7,
                                                                                         new BNode<int>(8,
                                                                                                        new BNode<int>(10,
                                                                                                                       new BNode<int>(11,
                                                                                                                                      nullptr,
                                                                                                                                      new BNode<int>(13))),
                                                                                                        new BNode<int>(12))))));
            
            printTree(tree);
            
            cout<<endl<<"The leftmost descendant of the rightmost node is: "<<(*getRLmost(tree)) -> data<<endl;
            
            problemFooter();
            break;
            
        }
        case 2: {
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
            
            delGsons(tree);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 5: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(1,
                                              new BNode<int>(2,
                                                             new BNode<int>(3),
                                                             new BNode<int>(4)),
                                              new BNode<int>(5,
                                                             new BNode<int>(0,
                                                                            new BNode<int>(7),
                                                                            new BNode<int>(10,
                                                                                           new BNode<int>(11),
                                                                                           new BNode<int>(12))),
                                                             new BNode<int>(0,
                                                                            new BNode<int>(8),
                                                                            new BNode<int>(9))));
            
            printTree(tree);
            
            del0(tree);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        default:
            cout<<"No such problem"<<endl;
            break;
    }
}