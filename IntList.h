#include <iostream>
using namespace std; 

#ifndef INTLIST_H
#define INTLIST_H

struct IntNode {
  int data;
  IntNode *prev; 
  IntNode *next;
  IntNode(int data) : data(data), prev(0), next(0) {}
};

class IntList {
  public:
    IntList();
    ~IntList();
    void push_front(int);
    void pop_front();
    void push_back(int);
    void pop_back();
    bool empty() const;
    friend ostream & operator<<(ostream &, const IntList &);
    void printReverse() const; 
  private:
    // dummy head
    IntNode *dummyHead;
    // dummy tail
    IntNode *dummyTail;
};

#endif
