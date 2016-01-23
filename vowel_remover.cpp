#include<iostream>
#include<string.h>
using namespace std;


int main() {
   char arr[100], temp,b[100];
   int i, j = 0,k,l=0;
    cout<<"Enter the string :";
   cin>>arr;

   i = 0;
   j = strlen(arr) - 1;

   while (i < j) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
   }

   cout<<"\nReverse string is :" <<arr;
    for(k=0;k<=strlen(arr);k++) {
        if(arr[k]=='a'||arr[k]=='e'||arr[k]=='i'||arr[k]=='o'||

    arr[k]=='u')
                arr[k]=' ';
        else
                b[l++]=arr[k];
    }
    b[l]='\0';
    cout<<"\nReversed and vowels removed:"<<b;
   return (0);
}
