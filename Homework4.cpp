#include <iostream>
#include <cassert>
#include <array>

using namespace std;

/* Display contents of the input array to screen
A: Input Array
N: Size of the array A
*/
void printArray(int A[], size_t N)
{
  //You must implement this function
  for(int i = 0; i<N; i++)
  {
    cout << A[i] << ", ";
  }

}


/*
  Checks whether the items in the input array are sorted
  A: Input Array
  N: Size of the array A
*/
bool isSorted(int A[], size_t N)
{
  //You must implement this function
  for(int j = 0; j < N; j++)
  {
    if (A[j] < A[j+1])
    {
      return true;
    }
  }
  return false;
}

/*
  Merge Procedure
  Assumes that the subarrays A[p..q] and A[q+1..r] are sorted
  It merges them to form a single sorted subarray
  that replaces the current subarray A[p..r]
*/
void merge(int A[], size_t p, size_t q, size_t r) {
  int n1 = q - p + 1;
  int n2 =  r - q;
  int Left[n1];
  int Right[n2];
  for (int i =0; i<n1; i++){
      Left[i] = A[p + i];
  }
  for (int j=0; j<n2; j++){
      Right[j] = A[q+j+1];
  }
  int i = 0;
  int j = 0;
  int k = p;
  while (i < n1 && j < n2)
  {
    if (Left[i] <= Right[j])
    {
        A[k] = Left[i];
        i++;
    }
    else
    {
        A[k] = Right[j];
        j++;
    }
    k++;
  }
  while (i < n1)
  {
      A[k] = Left[i];
      i++;
      k++;
  }
  while (j < n2)
  {
      A[k] = Right[j];
      j++;
      k++;
  }
}

/*
  Merge Sort Implementation Algorithm
  Sorts the elements in the subarray A[p..r]
*/
void mergeSort(int A[], size_t p, size_t r)
{
  if(p <r)
  {
    int q = p+r/2;
    mergeSort(A[],p,r);
    mergeSort(A[],q + 1, r);
    merge(A,p,q,r);

  }
  //You must implement this function
}

int main () {
  int A[] = {24, 12, 93, 84, 9, 6, 41};
  cout << "Original Array:" << endl;
  printArray(A, 7);

  // FIRST BLOCK OF COMMENTS

  assert(!isSorted(A, 7));
  int A_test[] = {1, 2, 3, 4, 5, 0};
  assert(!isSorted(A_test, 6));
  int B_test[] = {5, 4, 3, 2, 1, 0};
  assert(!isSorted(B_test, 6));
  int C_test[] = {9, 10, 7, 8, 5, 6, 3, 4, 1, 2};
  assert(!isSorted(C_test, 10));
  int D_test[] = {5, 4};
  assert(!isSorted(D_test, 2));


  //Calls to merge function should go here
  merge(A,7,9,3,2);
  merge(A,2,3,9,7);
  merge(A,10,34,12);
  merge(A,6,30,90,7);
  merge(A,20,3,100);
  merge(A)
  //SECOND BLOCK OF COMMENTS

  cout << "Array after sorting:  " << endl;
  printArray(A, 7);
  cout << endl;
  assert(isSorted(A, 7));


  //THIRD BLOCK OF COMMENTS
  int arrayCasado[] = {23,12,34,53,12,43,56,8,7,9};
  int B[] = {222, 111, 999, 888, 99, 77, 422};
  cout << "Testing mergeSort on the following array:" << endl;
  printArray(B, 7);
  mergeSort(B, 0, 6);
  assert(isSorted(B, 7));
  cout << "Array after sorting:" << endl;
  printArray(B, 7);

  int C[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  cout << "Testing mergeSort on the following array:" << endl;
  printArray(C, 11);
  mergeSort(C, 0, 10);
  assert(isSorted(C, 11));
  cout << "Array after sorting:" << endl;
  printArray(C, 11);
  mergeSort(arrayCasado,10);

}
