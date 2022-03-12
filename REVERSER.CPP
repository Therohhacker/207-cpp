#include<iostream.h>
#include<conio.h>
void main()
{
	int rev=0,no;
	clrscr();
	cout<<"enter a number"<<endl;
	cin>>no;

	while(no!=0)
	{
	int rem=no%10;
	rev=(rev*10)+rem;
	no=no/10;
	}
	cout<<"the reverse of number is = "<<rev;

	getch();
}