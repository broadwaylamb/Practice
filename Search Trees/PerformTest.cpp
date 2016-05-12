//
//  PerformTest.cpp
//  Search Trees
//
//  Created by Sergej Jaskiewicz on 06.05.16.
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
        case 0: {
            problemHeader(problemNumber);
            
            int number = 12;
            cout<<"Given a number: "<<number<<endl;
            for (int i = 0; i < 8; i++) {
                cout<<"Its "<<i<<"th bit is "<<digit(number, i)<<endl;
            }
            
            problemFooter();
            break;
        }
        default:
            cout<<"No such problem"<<endl;
            break;
    }
}