#include<iostream.h>
#include<conio.h>

class binary
{
	private:
		int a,b;
	public:
		void set();
		friend binary operator +(binary &b1, binary &b2);
		void show();
};

binary operator +(binary &b1, binary &b2)
{
	binary b3;
	b3.a = b1.a + b2.a;
	b3.b = b1.b + b2.b;
	return b3;
}

void binary::set()
{
	cout<<"enter a value of a";
	cin>>a;
	cout<<"enter a value of b";
	cin>>b;
}

void binary::show()
{
	cout<<"The value of a is ->"<<a<<endl;
	cout<<"The value of b is ->"<<b<<endl;
}

void main()
{
	clrscr();
	binary b1,b2,b3;
	b1.set();
	b2.set();
	b3 = b1 + b2;
	b3.show();

	getch();
}