#include<iostream.h>
#include<conio.h>
class binary
{
	private:
		int a,b;
	public:
		void get();
		binary operator +(binary &b);
		void show();
};

void binary::get()
{
	cout<<"enter a value of a"<<endl;
	cin>>a;
	cout<<"enter a value of b"<<endl;
	cin>>b;
}
void binary::show()
{
	cout<<"************************************"<<endl;
	cout<<"addition of b1& b2 is"<<endl;
	cout<<"value of a is : "<<a<<endl;
	cout<<"value of b is : "<<b<<endl;
	cout<<"************************************"<<endl;
}
binary binary ::operator +(binary &B)
{
	binary b3;
	b3.a = a+B.a;
	b3.b = b+B.b;
	return (b3);
}

void main()
{
	clrscr();
	binary b1,b2,b3;
	b1.get();
	b2.get();
	b3=b1+b2;
	b3.show();
	getch();
}
