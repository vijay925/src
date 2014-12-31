#ifndef ARRAY_H
  #define ARRAY_H

#include <iostream>
using namespace std;
class Array
{
  friend ostream& operator<<(ostream &, const Array&);
  friend istream& operator>>(istream &, Array&);

  public:
    Array(int = 10);
    Array(Array&);
    ~Array();
    int get_size();
    const Array& operator= (const Array &);
    bool operator== (const Array &);
    bool operator!= (const Array &);
    int& operator[] (const int);
    int operator[] (const int) const;
    void print();

  private:
    int* ptr;
    int size;

};

#endif