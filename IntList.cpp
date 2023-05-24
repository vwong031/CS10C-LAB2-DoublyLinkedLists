#include "IntList.h"

IntList::IntList() {
  dummyHead = new IntNode(0);
  dummyTail = new IntNode(0);

  dummyHead->next = dummyTail;
  dummyTail->prev = dummyHead;
}

IntList::~IntList() {

  while (dummyHead->next != dummyTail) {
    dummyHead = dummyHead->next; 
    delete dummyHead;
  }

}

void IntList::push_front(int value) {
  // cout << "pushfront fct entered" << endl; 

  // first node (not dummy node)
  IntNode *firstNode = nullptr; 
  // node being inserted
  IntNode *newNode = new IntNode(value);

  // cout << "pushfront fct entered" << endl; 

  // sets next & prev pointers for newNode
  // cout << "newNode->next = head->next" << endl; 
  newNode->next = dummyHead->next;
  newNode->prev = dummyHead; 

  // sets dummy node's next pointer
  dummyHead->next = newNode;

  // sets prev on former first node
  firstNode = dummyHead->next->next;
  firstNode->prev = newNode;
  // if (firstNode != nullptr) {
  //   // cout << "firstNode != nullptr" << endl; 
  //   firstNode->prev = newNode;
  // }
}

void IntList::pop_front() {
  // checks if list is empty
  if (empty()) {
    return;
  }
  // points tmp to node after first node (2nd real node)
  IntNode *sucNode = dummyHead->next->next;

  // cout << "sucNode: " << sucNode->data << endl; 

  // points dummyHead node's nxt ptr to sucNode
  dummyHead->next = sucNode;
  // points sucNode's prev ptr to dummyHead
  sucNode->prev = dummyHead; 
}

void IntList::push_back(int value) {
  IntNode *newNode = new IntNode(value); 
  IntNode *predNode = dummyTail->prev;

  // points newNode's next to the dummyTail
  newNode->next = dummyTail; 
  // points newNode's prev to dummyTail's prev
  newNode->prev = predNode; 

  // points dummyTail's prev's next ptr to the newNode
  predNode->next = newNode; 
  // points dummyTail's prev to newNode
  dummyTail->prev = newNode;
}

void IntList::pop_back() {
  // checks if list is empty
  if (empty()) {
    return;
  }

  IntNode *nodeBeingRemoved = dummyTail->prev;
  IntNode *newTail = nodeBeingRemoved->prev;

  newTail->next = dummyTail; 
  dummyTail->prev = newTail;
}

bool IntList::empty() const {
  bool empty = false;

  if (dummyHead->next == dummyTail) {
    empty = true;
  }

  return empty;
}

ostream & operator<<(ostream &out, const IntList &node) {
  IntNode *tmp = node.dummyHead->next; 

  // cout << "ostream operator <<" << endl;

  while (tmp != node.dummyTail) {
    // cout << "entering while loop" << endl; 
    if (tmp != node.dummyTail->prev) {
      out << tmp->data << ' ';
    }
    else {
      out << tmp->data;
    }
    tmp = tmp->next;
  }

  // cout << "dummyTail->prev: " << node.dummyTail->prev->data << endl; 

  // cout << "test" << endl; 

  return out; 
}

void IntList::printReverse() const {
  IntNode *tmp = dummyTail->prev;

  while (tmp != dummyHead) {
    cout << tmp->data << ' ';
    tmp = tmp->prev;
  }
}
