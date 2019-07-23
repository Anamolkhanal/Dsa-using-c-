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
void DeleteData()
{
	cout<<"enter the index number of the list to delete it:";
	int index;
	cin>>index;
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
	
	

int main()
{
	int data, position;
	cout<<"Enter the size of the linklist: ";
	cin>>size; 
	int ch;
	do{
		cout<<"\n***MENU****\n1.Insert Data\n2.Display Data\n3.Delete\n4.Exit\n";
		cin>>ch;
		switch (ch)
		{
			case 1:
				while(size>0)
			{
				cout<<"Enter the data :";
				cin>>data;
				cout<<"Enter the position :";
				cin>>position;
				InsertData(data,position);
				size--; 
			}
				break;
			case 2:
				DisplayData();
				break;
			case 3:
				DeleteData();
				
				break;
			case 4:
				
				cout<<"Thank you!!";
				exit (0);
			default:
				cout<<"your choice is not valid";
		}
	}while(ch!=4);
	getche();
}
