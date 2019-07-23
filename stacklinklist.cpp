#include<iostream>
#include<conio.h>
using namespace std;
int size , top;
struct Node
{
	int data;
	struct Node*next;
};
struct Node*head;
void InsertData(int data, int position)
{
	int i;
	
	Node*temp1=new (struct Node);
	temp1->data=data;
	temp1->next=NULL;
	if(position==1)
	{
		temp1->next=head;
		head=temp1;
		return;
	}
	Node*temp2=head;
	for(i=0;i<position-2;i++)
	{
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
}
void DisplayData()
{	
	Node*temp=head;
	while (temp!=NULL)
	{
		cout<<temp->data<<"->";
		cout<<temp->next<<"||";
		temp=temp->next;
    }
   // return;
}
void DeleteData(int index)
{
	//cout<<"enter the index number of the list to delete it:";
	//int index;
	//cin>>index;
	struct Node*temp=head;
	if(index==1)
	{
		head=temp->next;
		delete temp;
		return;
	}
	
	for(int i=1;i<index-1 ;i++)
	temp=temp->next;
	
	struct Node*temp2=temp->next;
	temp->next=temp2->next;
	delete temp2;
}
void push()
{ 
   int position=1;
   int data;
	while(size>0)
	{
		cout<<"Enter the data :";
		cin>>data;	
	    InsertData(data,position);
	    position++;
		size--; 
	}
	top=position;	
}
void Pop()
{     cout<<"delete";
	DeleteData(top);
}
void Displaytop()
{ 
    struct Node*temp=head;
	while (temp!=NULL)
	{
	     temp=temp->next;
    }
    cout<<temp->data<<"->";
	cout<<temp->next<<"||";
}
int main()
{
	int data, position;
	cout<<"Enter the size of the linklist: ";
	cin>>size; 
	int ch;
	do{
		cout<<"\n***MENU****\n1.Push\n2.Display Data\n3.Pop\n4.Display top\n5.Exit";
		cin>>ch;
		switch (ch)
		{
			case 1:
				push();
				break;
			case 2:
				DisplayData();
				break;
			case 3:
				Pop();
				break;
			case 4:
				Displaytop();
				break;
			case 5:
				cout<<"Thank you!!";
				exit (0);
			default:
				cout<<"your choice is not valid";
		}
	}while(ch=6);
	getche();
}
