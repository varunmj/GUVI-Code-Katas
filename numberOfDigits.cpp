#include <iostream>
using namespace std;
int main()
{
   int a,sum=0;
   int temp;
    cin>>a;
   temp=a;
   while(temp!=0){
    temp/=10;
    sum++;
   }
   cout<<sum;
    return 0;
}
