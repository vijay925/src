#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

Array::Array(int size_passed)
{
  if(size_passed > 0)
    size = size_passed;
  else
    cout << "Size must be greater than 0" << endl;

  ptr = new int[size];

  for(int i = 0; i < size; i++)
    ptr[i] = 0;
}

Array::Array(Array &arrayToBeCopied)
{
  size = arrayToBeCopied.size;

  ptr = new int[size];

  for(int i = 0; i < size; i++)
    ptr[i] = arrayToBeCopied.ptr[i];
}

Array::~Array()
{
  delete [] ptr;
}

int Array::get_size()
{
  return size;
}

const Array& Array::operator=(const Array & array_passed)
{
  if(*this != array_passed)
  {
    if(size != array_passed.size)
    {
      size = array_passed.size;
      ptr = new int[size];
      delete [] (*this).ptr;
    }

    for(int i = 0; i < size; i++)
      ptr[i] = (array_passed.ptr)[i];
  }

  return *this;
}

bool Array::operator== (const Array & array_passed)
{
  if(size != array_passed.size)
    return false;
  else
  {
    for(int i = 0; i < size; i++)
    {
      if(ptr[i] != array_passed.ptr[i])
        return false;
    }
  }

  return true;
}

bool Array::operator!= (const Array & array_passed)
{
  return ! (*this == array_passed);
}


void Array::print()
{
  for(int i = 0; i < size; i++)
  {
    cout << ptr[i] << " ";
  }

  cout << endl;

}

int& Array::operator[] (const int index)
{
  if(index < 0 || index > size)
    throw out_of_range("Out of range index");

  return ptr[index];
}

int Array::operator[](int index) const
{
  if(index < 0 || index > size)
    throw out_of_range("Out of range index");

  return ptr[index];
}

ostream& operator<<(ostream &output, const Array& array_passed)
{
  for(int i = 0; i < array_passed.size; i++)
    output << (array_passed.ptr)[i] << " ";
  output << endl;

  return output;
}

istream& operator>>(istream &input, Array& array_passed)
{
  for(int i = 0; i < array_passed.size; i++)
    input >> (array_passed.ptr)[i];

  return input;
}
