#include<iostream>
#include<conio.h>
using namespace std;
int fibo(int n)
{
	 if(n==0||n==1)
	return n;
	else
	return fibo(n-1)+fibo(n-2);
}
main()
{
	int n;
		do{
	     cout<<"enter any value";
	     cin>>n;
		 }while(n<0);
	for(int i=0;i<n;i++)
	cout<<fibo(i)<<"\t" ;
}
