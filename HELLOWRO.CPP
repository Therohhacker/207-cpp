//program to demostrate arithmetic operator.
#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter a number"<<endl;
	cin>>a;
	cout<<"Enter a second number"<<endl;
	cin>>b;

	int sum=a+b;
	int sub=a-b;
	int mul=a*b;
	int div=a/b;
	cout<<"sum is="<<sum<<endl;
	cout<<"substraction is="<<sub<<endl;
	cout<<"multiplication is="<<mul<<endl;
	cout<<"division is="<<div<<endl;


	getch();
}