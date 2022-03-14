//program of swapping of two variables.
#include<iostream.h>
#include<conio.h>

void swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;

}

void main()
{
	int a,b;
	clrscr();

	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;

	cout<<"before calling swap function"<<endl;
	cout<<"the value of a and b is=" <<a<<"and"<<b<<endl;

	swap(a,b);

	cout<<"after calling swap funtion"<<endl;
	cout<<"the value of a and b is ="<<a<<"and"<<b<<endl;

	getch();
}