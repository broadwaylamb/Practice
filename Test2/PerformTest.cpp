//
//  PerformTest.cpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 08.04.16.
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
                                                             new BNode<int>(3),
                                                             new BNode<int>(4)),
                                              new BNode<int>(5,
                                                             new BNode<int>(6,
                                                                            new BNode<int>(7),
                                                                            new BNode<int>(10,
                                                                                           new BNode<int>(11),
                                                                                           new BNode<int>(12))),
                                                             new BNode<int>(8,
                                                                            nullptr,
                                                                            new BNode<int>(9))));;
            
            printTree(tree);
            
            cout<<"The number of nodes of depth <= 2: "<<count(tree)<<endl;
            
            
            
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
                                                                           nullptr,
                                                                           new BNode<int>(9))));;
            
            printTree(tree);
            
            delGsons(tree);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 3: {
            problemHeader(problemNumber);
            
            ANode<int> *tree = new ANode<int>(1,
                                              new ANode<int>(2,
                                                             new ANode<int>(5, nullptr,
                                                             new ANode<int>(6, nullptr,
                                                             new ANode<int>(7))),
                                              new ANode<int>(3,
                                                             new ANode<int>(8, nullptr,
                                                             new ANode<int>(9)),
                                              new ANode<int>(4,
                                                             new ANode<int>(10, nullptr,
                                                             new ANode<int>(11, nullptr,
                                                             new ANode<int>(12, nullptr,
                                                             new ANode<int>(13))))))));
            
            printTree(tree);
            
            for (int i = 0; i <= 5; i++) {
                ANode<int> *t = last_d(tree, i);
                if (t != nullptr)
                    cout<<"The last child with data "<<i<<" is: "<<t -> data<<endl;
                else
                    cout<<"The last child with data "<<i<<" is: "<<"No such node"<<endl;
            }
            
            problemFooter();
            break;
        }
        case 4: {
            problemHeader(problemNumber);
            
            ANode<int> *tree = new ANode<int>(1,
                                              new ANode<int>(2,
                                                             new ANode<int>(5,
                                                                            new ANode<int>(14, nullptr,
                                                                            new ANode<int>(15)),
                                                             new ANode<int>(6, nullptr,
                                                             new ANode<int>(7))),
                                              new ANode<int>(3,
                                                             new ANode<int>(8, nullptr,
                                                             new ANode<int>(9)),
                                              new ANode<int>(4,
                                                             new ANode<int>(10, nullptr,
                                                             new ANode<int>(11, nullptr,
                                                             new ANode<int>(12, nullptr,
                                                             new ANode<int>(13))))))));
            
            printTree(tree);
            
            flatten1(tree);
            
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
                                                             new BNode<int>(6,
                                                                            new BNode<int>(7),
                                                                            new BNode<int>(10,
                                                                                           new BNode<int>(11),
                                                                                           new BNode<int>(12))),
                                                             new BNode<int>(8,
                                                                            nullptr,
                                                                            new BNode<int>(9))));
            
            printTree(tree);
            
            for (int i = 0; i < 12; i = i + 2) {
                BNode<int> *t = search1(tree, i);
                if (t != nullptr)
                    cout<<"The node with data "<<i<<" is: "<<t -> data<<endl;
                else
                    cout<<"The node with data "<<i<<" is: "<<"No such node"<<endl;
            }
            
            
            problemFooter();
            break;
        }
        default:
            cout<<"No such problem"<<endl;
            break;
    }
}