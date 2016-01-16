#include <iostream>
using namespace std;

int main()
{
    int first,last,i,j,flag;
    cin>>first>>last;
    for(i=first+1;i<last;i++){
        flag = 0;
        for(j=2;j<i;j++){
            if(i%j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<i<<" ";
        }                
    }
    return 0;
}
