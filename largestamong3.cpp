#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter the value of A:";
cin>>a;
cout<<"Enter the value of B:";
cin>>b;
cout<<"Enter the value of C:";
cin>>c;
if((a>b)&&(a>c)){
    cout<<a<<" is greater";
}else if(b>c){
    cout<<b<<" is greater";
}else{
    cout<<c<<" is greater";
}
    return 0;
}
