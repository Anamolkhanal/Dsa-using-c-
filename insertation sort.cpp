//Insertation Sort
#include<iostream>
#include<conio.h>
int a[100], size;
using namespace std;
void display(void)
{
	int i;
	cout<<"\nSorted value by using Insertation sort\n";
	for(i=0;i<size;i++)
	{
		cout<<i+1<<" value of array is :"<<a[i]<<"\n";
	}
}
void insertationSort(void)
{
	int i, j, temp;
	for(i=0;i<size-1;i++)
	{
	//	temp=a[i];
	/*	j=i;
		while(j>=0&&temp<a[j-1])
		{
			a[j]=a[j-1];
			j=j-1;
		}
		a[j]=temp;*/
		for(j=0;j<size-1;j++)
		{
			if(a[j]>a[j+1])
			{ 
				swap(a[j],a[j+1]);
	  		}
		}
	}
	system("cls");
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
	insertationSort();
	
 }
