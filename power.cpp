#include<iostream>
#include<string>
using namespace std;

int main( )
{
    int num,pow,i,sum=1;
    cout<<"NUMBER ";
    cin>>num;
    cout<<"POWER ";
    cin>>pow;
    for(i=1;i<=pow;i++){
        sum = sum*num;
    }
    cout<<sum;
    return 0;
}
