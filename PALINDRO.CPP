#include<iostream.h>
#include<conio.h>
void main()
{
	int rem,rev,no;
	clrscr();
	rev=0;
	cout<<"enter a number"<<endl;
	cin>>no;
	int temp= no;
	while(no!=0)
	{
		rem=no%10;
		rev=(rev*10)+rem;
		no=no/10;

	}
	if(temp==rev)
	{
		cout<<"number is palindrom";
	}
	else
	{
		cout<<"number is not palindrome";
	}

	getch();
}