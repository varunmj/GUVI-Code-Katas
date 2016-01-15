#include <iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter the number:";
cin>>a;
if(a==0){
    cout<<a<<" is zero"<<endl;
}else if (a>0){
cout<<a<<" is postive"<<endl;
}else{
cout<<a<<" is negative"<<endl;
}
return 0;
}
