//  Jose J Saldivar
//  Homework 4
//  MyIntDeque

//  Created by Jose Saldivar on 3/7/19.
//  Copyright © 2019 Jose Javier Saldivar. All rights reserved.
//

                                        // *DOUBLY LINKED LIST* //
#ifndef MyIntDeque_h
#define MyIntDeque_h
using namespace std;

class MyIntDeque
{
private:
    
    struct Node {
        
        int value;
        Node *next, *prev;     // the NEXT POINTER /  PREVIOUS POINTER
}; // closing node
    
        Node *first;            // the FIRST POINTER
        Node *last;             // the LAST POINTER
        
public:
        MyIntDeque(); //
        ~MyIntDeque(); //
        void push_back(int i); //
        void push_front(int i);
        void pop_back();
        void pop_front();
        int size();
        int front();
        int back();
        bool isFull();
        bool isEmpty();
        void clear();
    
        // checking for a previous assingment
        void print();
        
}; // closing class

MyIntDeque::MyIntDeque()
{
    first = last = nullptr;
}
MyIntDeque::~MyIntDeque()
{
    clear();
}
void MyIntDeque::push_back(int i)   // adds integer to end of deque (APPEND)
{
    if (isFull() )
    {
        cout << "Deque is Full .\n";
        return;
    }
    
    Node *n = new Node;
    n -> value = i;
    n -> next = nullptr;
    n -> prev  = nullptr;
    
    if (isEmpty () )
    {
        first = last = n;
        return;
    }
    last -> next = n;
    n -> prev = last;
    last = n;
}
void MyIntDeque::push_front(int i)  // adds integer to front of deque
{
    if (isFull() )
    {
        cout << "Deque is Full .\n";
        return;
    }
    
    Node *n = new Node;
    n -> value = i;
    n -> next = n -> prev  = nullptr;
    
    if (isEmpty () )
    {
        first = last = n;
        return;
    }
    n -> next = first;
    first -> prev = n;
    first = n;
}
void MyIntDeque::pop_back()
{
    if(first == nullptr)
        throw "EMPTY VECTOR";
    
    else if(first == last)
    {
        delete first;
        first = last = nullptr;
        return;
    }
    else
    {
        Node *p = new Node;
        p = first;
        
        while(p->next != last)
            p = p->next;
        
        delete last;
        
        last = p;
        last->next = nullptr;
    }
}
void MyIntDeque::pop_front()
{
    if(front() == isEmpty())
        throw "EMPTY VECTOR";
    
    else if(first == last)
    {
        delete first;
        first = last = nullptr;
    }
    else
    {
        Node *p = new Node;
        p = first;
        
        while(p != last)
            p = p->next;
        
        delete first;
        
        first = p;
        first->next = nullptr;
    }
}
int MyIntDeque::size()
{
    if (isEmpty () )
        return -1;
    
    int count = 0;
    
    Node *p = first;
    Node *q = last;
    
    while(p != nullptr && q != nullptr)
    {
        p = p->next;
        q = q->next;
        count++;
    }
    return count;
}
int MyIntDeque::front()
{
    if ( isEmpty() )
        return -1;
    else
        return first -> value;
    //return MyIntDeque -> front;
}
int MyIntDeque::back()
{
    if ( isEmpty() )
        return -1;
    
    return last -> value;
}
bool MyIntDeque::isFull()
{
    Node *n;
    n = new Node;
    
    if (n == NULL)
        return true;
    
    delete n;
    return false;
}
bool MyIntDeque::isEmpty()
{
    if (first == nullptr)
        return true;
    else
        return false;
}
void MyIntDeque::clear()
{
   while (first != nullptr)
   {
       Node *pointer = new Node;
    pointer = first;
    first = first -> next;
    delete pointer;
   }
    last =  nullptr;
}
void MyIntDeque::print()
{
    Node *pointer = first;
    if(isFull())
    {
        cout << "Nothing to print";
    }
    while(pointer)
    {
        
        cout << pointer -> value << endl;
        pointer = pointer -> next;
    }
}


/*
                ////////////// Main Interface ///////////////////
int main ()
{
    MyIntDeque q;
    
    q.push_front (20);
    q.push_front (15);
    q.push_front (10);
    q.push_front (5);
    
    int size = q.size();
    int first = q.front();
    int last = q.back();
    
    cout << "Linked list first node : " << first << endl;
    cout << "Linked list last node : " << last << endl;
    cout << "Linked list size : " << size << endl;
    
    cin.get();
    
    q.pop_back();
    // q.pop_back();
    // q.pop_back();
    
    
    first = q.front();
    last = q.back();
    size = q.size();
    
    cout << "Linked list first node : " << first << endl;
    cout << "Linked list last node : " << last << endl;
    cout << "Linked list size : " << size << endl;
    
    
    //test front, back, last few touch ups and finish
    
    cout << "Thank you \n";
    
}
*/
#endif /* MyIntDeque_h */
