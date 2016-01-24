#include<iostream>
using namespace std;
int num,del,n[100],count=0;
void sort();
int main()
{
cout<<"enter a number ";
cin>>num;
for(int i=0;num!=0;i++)
{
	n[i]=num % 10;
	num /= 10;
	count++;
}
cout<<"enter no of digits you want to delete: ";
cin>>del;
sort();
cout<<"the smallest value after deleting "<<del<<" digits : ";
for(int j=0;j<(count-del);j++)
{
	cout<<n[j];
}
cout<<endl;
return 0;
}
void sort()
{
for(int i=0;i<count;i++)
{
	for(int j=0;j<count;j++)
	{	
		int c;
		if(n[i]<n[j])
		{
			c=n[i];
			n[i]=n[j];
			n[j]=c;
		}
	}
}
}
