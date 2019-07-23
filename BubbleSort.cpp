//Bubble sort
#include<iostream>
#include<conio.h>
int a[100], size;
using namespace std;
void display(void)
{
	int i;
	cout<<"\nSorted value by using Bubble  sort\n";
	for(i=0;i<size;i++)
	{
		cout<<i+1<<" value of array is :"<<a[i]<<"\n";
	}
}
void bubbleSort(void)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for (j=0;j<size-i-1;j++)
		{
			if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
		}
	}
	display();
}
main()
{
	int i;
	
	cout<<"Enter the size  of the array\n";
	cin>>size;
	for (i=0;i<size;i++)
	{
		cout<<i+1<<" value of array :";
		cin>>a[i];
	}
	bubbleSort();
	
}
