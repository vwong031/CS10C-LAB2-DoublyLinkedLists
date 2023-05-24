#include <iostream>
using namespace std;

#include "IntList.h"

int main() {
  IntList list; 
  int test;

  cout << "Enter a value (1-6): ";
  cin >> test;

  if (test == 1) {
    cout << "----PUSHFRONT FCT----" << endl; 
    cout << "pushfront 10" << endl; 
    list.push_front(10);
    cout << "pushfront 20" << endl;
    list.push_front(20);
    cout << "pushfront 0" << endl; 
    list.push_front(0);
    cout << "pushfront 5" << endl; 
    list.push_front(5);

    cout << endl; 
    cout << "----OUTPUTTING----" << endl; 
    cout << list << endl; 
  }
  if (test == 1) {
    cout << "destructor called" << endl; 
  }

  if (test == 2) {
    cout << "pushfront 10" << endl; 
    list.push_front(10);
    cout << "pushfront 20" << endl;
    list.push_front(20);
    cout << "pushfront 0" << endl; 
    list.push_front(0);
    cout << "pushfront 5" << endl; 
    list.push_front(5);

    cout << endl; 
    cout << "----OUTPUTTING----" << endl; 
    cout << list << endl;

    cout << "popfront()" << endl; 
    list.pop_front();

    cout << endl; 
    cout << "----OUTPUTTING----" << endl; 
    cout << list << endl;

  }
  if (test == 2) {
    cout << "destructor called" << endl; 
  }

  if (test == 3) {
    cout << "----PUSHBACK FCT----" << endl;
    cout << "pushfront 10" << endl; 
    list.push_front(10);
    cout << "pushfront 20" << endl;
    list.push_front(20);
    cout << "pushfront 0" << endl; 
    list.push_front(0);
    cout << "pushfront 5" << endl; 
    list.push_front(5); 

    cout << endl; 
    cout << "----OUTPUTTING----" << endl; 
    cout << list << endl;

    cout << "pushback -5" << endl; 
    list.push_back(-5);
    cout << "pushback 100" << endl;
    list.push_back(100);
    cout << "pushback 47" << endl; 
    list.push_back(47);

    cout << endl; 
    cout << "----OUTPUTTING----" << endl; 
    cout << list << endl;
  }
  if (test == 3) {
    cout << "destructor called" << endl; 
  }

  if (test == 4) {
    cout << "----POPBACK FCT----" << endl; 
    cout << "pushfront 10" << endl; 
    list.push_front(10);
    cout << "pushfront 20" << endl;
    list.push_front(20);
    cout << "pushfront 0" << endl; 
    list.push_front(0);
    cout << "pushfront 5" << endl; 
    list.push_front(5); 

    cout << endl; 
    cout << "----OUTPUTTING----" << endl; 
    cout << list << endl;

    cout << "popback()" << endl; 
    list.pop_back();

    cout << endl; 
    cout << "----OUTPUTTING----" << endl; 
    cout << list << endl;
  }
  if (test == 4) {
    cout << "destructor called" << endl; 
  }
 
  if (test == 5) {
    cout << "----EMPTY FCT" << endl; 
    cout << "pushfront 10" << endl; 
    list.push_front(10);
    cout << "pushfront 20" << endl;
    list.push_front(20);
    cout << "pushfront 0" << endl; 
    list.push_front(0);
    cout << "pushfront 5" << endl; 
    list.push_front(5);

    if (list.empty()) {
      cout << "list is empty" << endl;
    }
    else {
      cout << "list is not empty" << endl; 
    }
  }
  if (test == 5) {
    cout << "destructor called" << endl; 
  }

  if (test == 6) {
    cout << "----PRINT REVERSE FCT----" << endl;
    cout << "pushfront 10" << endl; 
    list.push_front(10);
    cout << "pushfront 20" << endl;
    list.push_front(20);
    cout << "pushfront 0" << endl; 
    list.push_front(0);
    cout << "pushfront 5" << endl; 
    list.push_front(5);

    cout << endl; 
    cout << "----OUTPUTTING----" << endl; 
    cout << list << endl;

    cout << endl;
    cout << "printing in reverse" << endl;
    list.printReverse();
    cout << endl; 
  }
  if (test == 6) {
    cout << "destructor called" << endl; 
  }

  return 0; 
}
