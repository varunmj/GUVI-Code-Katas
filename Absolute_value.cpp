#include <iostream>

using namespace std;

int main() {
     int ar[1000],n,i,j,temp;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>ar[i];
     }
     j=i-1;
     i=0;
     while(i<j){
        temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
        i++;
        j--;
     }
     for(i=0;i<n;i++){
        cout<<" "<<ar[i];
     }
    return 0;
}
