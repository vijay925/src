//
//  main.cpp
//  Euler1
//
//  Created by Vijay Kumar on 9/13/13.
//  Copyright (c) 2013 Vijay Kumar. All rights reserved.
//

#include <iostream>

using namespace std;
/*
int main(int argc, const char * argv[])
{

  int sum = 0;
  for (int i = 1; i < 1000; i++)
  {
    
    if ((i%3 == 0) || (i%5 == 0))
    {
      sum += i;
    }
    
  }
  cout << sum << endl;
  return 0;
}
*/

int main(int argc, const char * argv[])
{
  int sum = 0;
  int previous = 1;
  int current = 2;
  int fib = previous + current;
  int temp;
  
  while(fib < 4000000)
  {
    if((fib % 2) == 0)
    {
      sum += fib;
    }
    
    temp = fib;
    fib = fib + current;
    current = temp;

  }
  
  cout << sum << endl;
  return 0;
}


