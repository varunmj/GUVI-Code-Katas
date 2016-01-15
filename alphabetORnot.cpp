#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
char a;
cin>>a;
if(isdigit(a))
{
    cout<<a<<" is not an alphabet"<<endl;
}else{
    cout<<a<<" is an alphabet"<<endl;
}
    return 0;
}
