#include<iostream>
#include<conio.h>
using namespace std;
int fibo(int n)
{
	if(n==1||n==2)
	return n;
	else
	return fibo(n-1)+fibo(n-2);
}
main()
{
	int x;
	do{
	     cout<<"enter any value";
	     cin>>x;
	 }while(x<0);
cout<<fibo(x);
}
