#include <iostream>
using namespace std;
/*
int factorial(int n)
{
    int rc;              //stores result of function
    if(n==1 || n==0)
    {    //check for base case
        rc=1;            //if n is 1 or 0 rc is 1
    }
    else{                //else it is recursive case
        rc=n * factorial(n-1);  //rc is n * (n-1)!
    }
    return rc;
}
*/

int loop(int n)
{
  int factorial = 1;
  for(int i = 0; i < n; i++)
  {
    factorial = factorial*i;
  }
  return factorial;
}
int main()
{
  int n;
  cout << "Please eneter the value that you'll like to factorilize" << endl;
  cin >> n;
  cout << loop(n) << endl;

  return 0;
}
