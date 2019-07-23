 #include<iostream>
 #include<conio.h>
 using namespace std;
  void linearSearch(int a[], int target)
 {
 	bool flag=false;
 	for(int i=0;i<10;i++)
 	{
 		if(a[i]==target)
 		{
		 cout<<"the value "<<target<<" is in the index "<<i<<"\n";
		flag=true;
		}
	}
	if(! flag)
	cout<<"value not found\n";
 }
 main()
 {
 	int a[10], target;
 	for(int i=0;i<10;i++)
 	{
 		cout<<"\nenter the value of "<<i<<" index : ";
 		cin>>a[i];
	 }
	 cout<<"\nenter the value that u want to search : ";
	 cin>>target;
	linearSearch(a,target); 
 }

 	
 
