//linear queue
#include<iostream>
#include<conio.h>
# define x 5
int a[100], size,ch,front=-1, rear=-1;
using namespace std;
void Enqueue()
{    
	if(rear==size-1)
	cout<<"Queue is overflow";
	
	else{
			cout<<"enter the value";
			rear++;
			cin>>a[rear];
		}
}
void Dequeue()
{
	 if(front==-1)
	 cout<<"Queue is underflow";
	 else
	 {
	 	front++;
	 }
}
void Display()
{
	if(front==-1||rear==-1)
	cout<<"Queue is Empty";
//	else
//	{
//		for(int i=0;i<size;)
//	}
}
main()
{
	//cout<<"\nenter the size of the queue";
	//cin>>size;
	do{
	cout<<"\nEnter your choice:\n 1.Enqueue\n 2.Dequeue \n 3.Display";
	cin>>ch;
	switch (ch)
	{
	
	case 1:
		Enqueue();
		break;
	case 2:
		Dequeue();
		break;
	case 3:
		Display();
		break;
	default:
		cout<<"sorry invalid choice";
		break;	
	}
    }while(ch!=4);
}

