#include<iostream>
using namespace std;
void kth_tallest(int k);
void sort();
int b[50][2];
int main()
{
int k;
cout<<"enter the 50 element(s):"<<endl;
for(int i=0;i<5;i++)
{	cout<<"enter the height of student "<<i+1<<": ";
	cin>>b[i][1];
	b[i][0]=i+1;
}
sort();
cout<<"the fourth tallest student is: student "<<b[3][0]<<endl;
cout<<"to find the kth tallest student \nenter the value of k:";
cin>>k;
kth_tallest(k);
return 0;
}
void kth_tallest(int k)
{
	cout<<"The "<<k<<"th tallest student is student "<<b[k-1][0]<<endl;
}
void sort()
{	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{	
			int c[2];
			if(b[i][1]>b[j][1])
			{
				c[0]=b[i][1];
				c[1]=b[i][0];
				b[i][1]=b[j][1];
				b[i][0]=b[j][0];
				b[j][0]=c[1];
				b[j][1]=c[0];
			}
		}
	}
}
