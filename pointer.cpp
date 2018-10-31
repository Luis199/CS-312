using namespace std;
#include <iostream>

int main()
{
  int var1 = 5;
  int *p1 = &var1;
  cout << *p1 << endl;
  *p1 = 7;
  cout << *p1 << endl;

  return 0;
}
