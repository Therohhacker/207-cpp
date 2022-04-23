#include<iostream.h>
#include<conio.h>
template <class T1, class T2>
class Test
{
	public:
		Test(T1 a, T2 b)
		{
			cout<<a<<"\t"<<b;
		}
		void swap(T1 x, T2 y)
		{
			T1 t;
			t = x;
			x = y;
			y = t;
			cout<<x<<"\t"<<y<<endl;

		}


};
void main()
{
	clrscr();
	int p,q;
	cout<<"enter two interger for swap x and y"<<endl;
	cin>>p>>q;
	cout<<"\nbefore swap x & y: "<<endl;
	Test <int, int> test1(p,q);
	cout<<"\nAfter swap x  * y:"<<endl;
	test1.swap(p,q);
	char a,b;
	cout<<"***********************************************************"<<endl;
	cout<<"enter two character for swap x & y:"<<endl;
	cin>>a>>b;
	cout<<"\nbefore swap:"<<endl;
	Test<char , char>test2(a,b);
	cout<<"\nafter swap"<<endl;
	test2.swap(a,b);

	getch();
}