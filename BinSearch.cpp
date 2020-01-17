#include<algorithm>
#include<iostream>
using namespace std;

bool binarySearchReacursive(int* array, int startIndex, int lastIndex, int element)
{
  if(startIndex>=lastIndex)
  return false;
  int midIndex=(startIndex+lastIndex-1)/2;
  else if(array[midIndex]>element)
  return binarySearchReacursive(array,startIndex,midIndex-1,element);
  else if(array[midIndex]<element)
  return binarySearchReacursive(array,midIndex+1,lastIndex,element);
  else
  return true;
}

bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)
{
  while(startIndex<=lastIndex)
  {
    int midIndex=(startIndex+lastIndex-1)/2;
    
  }
  return true;
}

int main()
{
  int size;
  cout<<"\nEnter the number of elements in the array\n";
  cin>>size;
  int array[n];
  cout<<"\nEnter the elements\n";
  for(int i=0;i<size;i++)
  {
    cin>>array[i];
  }
  sort(array,array+n);

  return 0;
}
