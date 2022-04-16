


















#include<iostream.h>
#include<conio.h>
class derived;
class base{
	private:
	  int no1;
	public:
	  void setdata(int);
	  void display();
	  friend void add(base , derived);
};
class derived{
	private:
	  int no2;
	public:
	  void setdata1(int);
	  void display1();
	  friend void add(base, derived);
};

void base::setdata(int x)
{
	no1 = x;
}

void derived::setdata1(int y){
	no2 = y;
}

void base::display()
{
	cout<<"the value of a is :"<<no1<<endl;
}
void derived::display1()
{
	cout<<"the value of b is :"<<no2<<endl;
}

void add(base b, derived d)
{
  cout<<"the addition is :"<<b.no1+d.no2<<endl;
}
void main()
{
	clrscr();
	base b1;
	b1.setdata(4);
	b1.display();
	derived d1;
	d1.setdata1(5);
	d1.display1();
	add(b1,d1);
	getch();
}