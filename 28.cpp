/*
 * 28.cpp
 *
 *  Created on: Apr 7, 2006
 *      Author: user
 */
#include <iostream>
#include <string.h>
using namespace std;
typedef struct node
{
	int no;
	node *next;
	node *prev;
}NODE;
class linklist
{
private:
	NODE *first;
	NODE *last;
public:
	linklist()
	{
		first=last=NULL;
	}
	void addnode()
	{
		NODE *temp=new NODE;
		int n;
		cout<<"\n Enter number";
		cin>>n;
		temp->no=n;
		temp->next=NULL;
		temp->prev=NULL;
		if(first==NULL)
		{
			first=last=temp;
		}
		else
		{
			last->next=temp;
			temp->prev=last;
			last=temp;
		}
	}
	void show1()
	{
		NODE *temp=first;
		while(temp!=NULL)
		{
			cout<<"\n"<<temp->no;
			temp=temp->next;
		}
	}
	void show2()
	{
		NODE *temp=last;
		while(temp!=NULL)
		{
			cout<<"\n"<<temp->no;
			temp=temp->prev;
		}
	}
void sort()
{
	NODE *i,*j;
	int s;
	for(i=first;i!=NULL;i=i->next)
		for(j=i->next;j!=NULL;j=j->next)
if(i->no>j->no)
{
s=i->no;
	i->no=j->no;
	j->no=s;
}
}
};
int main()
{
	linklist l1;
	int ch;
	do {
		cout<<"\n 1.New node \n 2.forward display \n 3.backward display \n 4.sort \n 5.Quit \n Enter your choice";
		cin>>ch;
		switch(ch)
		{
		case 1:
			l1.addnode();
			break;
		case 2:
					l1.show1();
					break;
		case 3:
					l1.show2();
					break;
		case 4:
					l1.sort();
					break;
		}
	}while(ch!=5);
}



