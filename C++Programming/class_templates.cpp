#include <iostream>

using namespace std;

template <typename T>

class Vijay
{
public:
  Vijay(T a, T b)
  {
    first = a;
    second = b;
  }

  T bigger();

  private:
    T first;
    T second;
};

template <typename T>
T Vijay <T>::bigger()
{
  return (first>second?first:second);
}

int main(void)
{
  Vijay <int> vo(22,6);
  cout << vo.bigger() << endl;

  return 0;
}