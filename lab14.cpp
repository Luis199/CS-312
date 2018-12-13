#include <iostream>
#include <vector>
typedef unsigned long long int long_n;

using namespace std;
// RECURSIVE
 int fib(long_n n)
{
  if (n==0)
    return 0;
  if (n==1)
    return 1;

 return (fib(n-1) + fib(n-2));
}


//BOTTOM-UP
long_n Fibonacci(long_n n) {
 long_n fib[1000], j;
  fib[0] = 0;
  fib[1] = 1;
  for (j= 2; j<= n; j++)
    fib[j] = fib[j-1] + fib[j-2];
  return fib[n];
  }

//TOP-DOWN
long_n N=2000;
long_n saveF[2000];

long_n Fibonacci2(long_n i) {
  if (saveF[i] > 0) return saveF[i];
  if (i<= 1) return i;

  saveF[i] = Fibonacci2(i-1) + Fibonacci2(i-2);
  return saveF[i];
}

//MAIN PROGRAM
int main() {
  recusive = 45
  B_down = 100000000;
  T_down = 1000000000;
  // Recursive
  cout <<"The highest number for recursive is " fib(recursive) << endl;
  cout <<"The highest number for bottom down is " Fibonacci(B_down) << endl;
  cout << "The highest number for top down is " Fibonacci2(T_down) << endl;

  return 0;
}
