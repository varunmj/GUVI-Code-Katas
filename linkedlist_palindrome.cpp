#include<iostream>
using namespace std;
int checkPal();
void insert(char);
struct ll
{
	char data,data1;
	struct ll * next;
	struct ll * pre;
};
struct ll * head=NULL,* tail=NULL;
int main()
{
	char string[100];
	int i;
	cout<<"enter a string: ";
	cin>>string;
	for(i=0;string[i]!=NULL;i++)
	{
		insert(string[i]);
	}

	if(checkPal())
		cout<<"The given string is a palindrome"<<endl;
	else
		cout<<"The given string is not a palindrome"<<endl;
	return 0;
}
int checkPal()
{
	struct ll * p,*q;
	p=head;
	q=tail;
	while(p!=NULL)
	{
		if(p->data!=q->data)
		{
			return 0;
		}
		p=p -> next;
		q=q -> pre;
	}
return 1;
}
void insert(char ch)
{
	struct ll * p;
	if(head==NULL)
	{
		head=new ll;
		head -> data=ch;
		head -> next=NULL;
		head -> pre=NULL;
		tail=head;

	else
	{
		p=head;
		while(p -> next!=NULL)
		{
			p=p -> next;
		}
		p -> next=new ll;
		p -> next -> data= ch;
		p -> next -> next=NULL;
		p -> next -> pre=p;
		tail=p -> next;


	}
}

