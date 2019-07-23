#include<iostream>
#include<conio.h>
using namespace std;
struct Node{
	int info;
	struct Node* next;
};
struct Node* head=NULL;
int num;

void create ()
{
	cout<<"how many data are there to input?";
	cin>>num;
	for (int i=0;i<num;i++)
	{
		
	}
}
main()
{
	int ch;
	cout<<"Welcome to the linked list!!!";
	cout<<"Menu\n1.Create\2.Update\3.Exit";
	cin>>ch;
	if (ch==1)
	Create();
	else if(ch==2)
	Update();
	else if(ch==3)
	exit;
	else
	cout<<"Invalid choice! try again";
}
