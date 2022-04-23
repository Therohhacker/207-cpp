#include<iostream.h>
#include<conio.h>
template<class T>
void swap(T &x , T &y)
{
	T t;
	t = t;
	t = x;
	x = y;
	y = t;

}
void main()
{
	clrscr();
	char ch1, ch2;
	cout<<"enter two characters :" <<endl;
	cin>>ch1>>ch2;
	cout<<endl<<"********************************************************"<<endl;\

	cout<<"before swapping :"<<endl;
	cout<<" ch1 : \t "<<ch1<<endl;
	cout<<" ch2 : \t "<<ch2<<endl;
	cout<<endl;
	swap(ch1, ch2);
	cout<<"On swapping : "<<endl;
	cout<<" ch1 :"<<ch1<<endl;
	cout<<" ch2 :"<<ch2<<endl;
	cout<<"*****************************************************************"<<endl;

	int a,b;
	cout<<"enter value of two interger"<<endl;
	cin>>a>>b;
	cout<<"******************************************************************"<<endl;

	cout<<"Before Swapping: "<<endl;
	cout<<" a : \t"<<a<<endl;
	cout<<" b : \t"<<b<<endl;
	swap(a,b);
	cout<<endl;
	cout<<"on swapping"<<endl;
	cout<<" a : " <<a<<endl;
	cout<<" b : "<<b<<endl;

	getch();
}
