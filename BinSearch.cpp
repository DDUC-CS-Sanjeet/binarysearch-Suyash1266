#include<algorithm>
#include<iostream>
using namespace std;

bool binarySearchReacursive(int* array, int startIndex, int lastIndex, int element)
{
  if(lastIndex>=startIndex)
  {
    int midIndex=startIndex+(lastIndex-1)/2;
    if(array[midIndex]==element)
      return true;
    if(array[midIndex]>element)
      return binarySearchReacursive(array,startIndex,midIndex-1,element);
    return binarySearchReacursive(array,midIndex+1,lastIndex,element);
  }
  return false;
}

bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)
{
  while(startIndex<=lastIndex)
  {
    int midIndex=startIndex+(lastIndex-1)/2;
    if(array[midIndex]==element)
      return true;
    if(array[midIndex]<element)
      startIndex=midIndex+1;
    else
      lastIndex=midIndex-1;
  }
  if(startIndex>lastIndex)
    return false;
}

int main()
{
  int size;int element;
  cout<<"\nEnter the number of elements in the array\n";
  cin>>size;
  int array[size];
  cout<<"\nEnter the elements\n";
  for(int i=0;i<size;i++)
  {
    cin>>array[i];
  }
  sort(array,array+size);
  cout<<"\nEnter the element to be searched\n";
  cin>>element;
  cout<<"\nThrough Itreation\n";
  if(binarySearchIterative(array,0,size-1,element))
    cout<<"\nNumber Found\n";
  else
    cout<<"\nNumber not found\n";
  cout<<"\nThrough recursion\n";
  if(binarySearchReacursive(array,0,size-1,element))
    cout<<"\nNumber Found\n";
  else
    cout<<"\nNumber not found\n";
  return 0;
}
