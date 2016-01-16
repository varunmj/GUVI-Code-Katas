#include <iostream>
using namespace std;

int main() {
    int n,temp,a,reverse=0;
    cin>>n;
    temp=n;
    while(temp!=0){
        a=temp%10;
        reverse=reverse*10+a;
        temp/=10;
    }
    cout<<"Reverse of the number : "<<reverse;
    return 0;
}
