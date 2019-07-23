 //selection sort
#include<iostream>
#include<conio.h>
using namespace std;
void display(int a[],int size)
{ 
	int i;
	cout<<"Value after sorting\n";
	for(i=0;i<size;i++)
	{
		cout<<"\n"<<a[i];
		
	}
}
void selection(int a[],int size)
{
	int i,j,temp,small;
	for(i=0;i<size-1;i++)
	{
		small=i;
		for(j=i+1;j<size;j++)
		{
			if(a[j]<a[small])
			{
				small=j;
			}
			temp=a[i];
			a[i]=a[small]; 
			a[small]=temp;
		}
	}
	display(a,size);
}
main()
{
	int i, size, a[100];
	cout<<"Enter the size of array\n ";
	cin>>size;
	cout<<"Enter any  number\n";
	for (i=0;i<size;i++)
	{
		cin>>a[i];
	}
	selection(a,size);
	 
}
