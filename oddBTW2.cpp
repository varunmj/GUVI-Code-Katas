#include <iostream>
using namespace std;

int main()
{
    int first,last,i;
    cin>>first>>last;
    for(i=first+1;i<last;i++){
        if(i%2 != 0)
            cout<<i<<" ";
    }
    return 0;
}
