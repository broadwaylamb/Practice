//
//  PerformTest.cpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 29.04.16.
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
            
            cout<<"The sum of all the data is: "<<total(tree)<<endl;
            
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
            
            cout<<"The height os the tree is: "<<height(tree)<<endl;
            
            problemFooter();
            break;
        }
        case 3: {
            problemHeader(problemNumber);
            
            BNode<int> *tree = new BNode<int>(6,
                                              new BNode<int>(4,
                                                             new BNode<int>(3),
                                                             new BNode<int>(2)),
                                              new BNode<int>(-3,
                                                             new BNode<int>(1,
                                                                            new BNode<int>(0),
                                                                            new BNode<int>(10,
                                                                                           new BNode<int>(8),
                                                                                           new BNode<int>(-2))),
                                                             new BNode<int>(7,
                                                                            new BNode<int>(11),
                                                                            new BNode<int>(9))));
            
            printTree(tree);
            
            cout<<"The minimum value in the tree is: "<<min(tree)<<endl;
            
            problemFooter();
            break;
        }
        default:
            cout<<"No such problem"<<endl;
            break;
    }
}
