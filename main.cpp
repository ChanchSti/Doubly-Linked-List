//
//  main.cpp
//  MyIntDeque
//
//  Created by Jose Saldivar on 3/7/19.
//  Copyright © 2019 Jose Javier Saldivar. All rights reserved.
//

#include <iostream>
#include "MyIntDeque.h"
using namespace std;

int main ()
{
    MyIntDeque q;
    
    if(q.isFull())
        cout << "Queue is FULL\n";
    if(q.isEmpty())
        cout << "Queue is EMPTY\n";
    
    q.push_front (20);
    q.push_front (15);
    q.push_front (10);
    q.push_front (5);
    
    int size = q.size();
    int first = q.front();
    int last = q.back();
    
    cout << "1->Linked list first node : " << first << endl;
    cout << "1->Linked list last node : " << last << endl;
    cout << "1->Linked list size : " << size << endl;
    
    cout << "Printed list :" << endl;
    q.print();
    
    cout << "\nEnter new Value" << endl;
    cin.get();
    //cin.get() = q.push_front();
    
    q.pop_back();
    // q.pop_back();
    // q.pop_back();
    
    
    first = q.front();
    last = q.back();
    size = q.size();
    
    cout << "1->Linked list first node : " << first << endl;
    cout << "2->Linked list last node : " << last << endl;
    cout << "2->Linked list size : " << size << endl;
    
    
    //test front, back, last few touch ups and finish
    
    cout << "Thank you \n";
    
}
