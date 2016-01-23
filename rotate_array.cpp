#include<iostream>
using namespace std;
int main()
{
  int arr[30],array[30];
  int  a=0,n, i, k;

  cout<<"N: ";
  cin>>n;
  cout<<"\nK: ";
  cin>>k;
  cout<<"\n Enter the elements of array:";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  while(a<k)
  {
    for(i=0;i<n-1;i++)
    {
      array[i+1]=arr[i];
    }
    array[0]=arr[n-1];
    for(i=0;i<n;i++)
    {
      arr[i]=array[i];
    }
    a++;
  }
  cout<<"Output: ";
  for(i=0;i<n;i++)
  {
    cout<<array[i];
  }
    return 0;
}
