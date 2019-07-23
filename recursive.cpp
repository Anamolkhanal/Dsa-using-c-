#include<iostream>
#include<conio.h>
using namespace std;
long long fact(int n)
{
	if(n==1)
	return 1;
	else
	return(n*fact(n+1));
}
main()
{
	int x;
	do{
	     cout<<"enter any value";
	     cin>>x;
 }while(x<0);
long long  f=fact(x);
cout<<f ;
	
}
