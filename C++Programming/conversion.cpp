#include <iostream>
#include <string>

using namespace std;

class Test
{
  public:
    Test(int name_passed, string age_passed)
    :name(name_passed), age(age_passed)
    {

    }

    operator char* (Test &test_ref) const
    {
      //return test_ref.name;
    }
  private:
    int age;
    string name;

};

int main(void)
{
  Test t1("Vijay", 14);

  cout << static_cast <charg*> (t1);





  return 0;
}