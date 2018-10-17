#include <iostream>
#include <cassert>
using namespace std;
int sum2(int A[], int B[], int n1, int n2, int x) {
int count = 0;
for (int i=0; i<n1; i++)
{
for (int j=0; j<n2; j++)
{
if( (A[i] + B[j] )== x ){
//cout << "("<< A[i] << ", " << B[j] <<") ";
count++;
}
}
}
cout<<count;
return count;
}
int main () {
int A[] = {4, 5, 2, 7, 8, 10};
int B[] = {1, 9, -4, 12, -7, -6};
assert( sum2(A,B,6,6,6) );
cout<<endl<<endl;
int C[]={5, 2, 7, -8, 10, -20, 13, 64, 0, -36, -10, -4, -44};
int D[]={ 1, 2, 3, 5, 6, 7, 8, 10, 12, 13, 14, 15, 16, 17, 19, 20,
21, 22, 23, 25, 26, 27, 28, 30, 31, 33, 34, 35, 36, 37, 41, 41, 43, 44,
47, 48, 49, 50, 51, 52, 53, 54, 56, 57, 58, 63, 64, 65, 67, 68, 69, 70,
75, 80};
int c= sizeof(C)/sizeof(C[0]);
int d= sizeof(D)/sizeof(D[0]);
assert( sum2(C,D,c,d,14) );
cout<<endl;
return 0;
}
