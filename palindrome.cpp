#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,ld;
    cin>>n;
    int temp=n;
    while(temp!=0){
        ld=temp%10;
        sum=sum*10 +ld;
        temp/=10;
    }
    if(n == sum)
        cout<<"Palindrome";
    else
        cout<<"Not a palindrome";
    return 0;        
}
