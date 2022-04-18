#include<iostream.h>
#include<conio.h>
class base
{
	public:
		virtual void show();
};
class derived:public base
{
	public:
		void show();
};

void base::show()
{
	cout<<"base class function called"<<endl;
}
void derived::show()
{
	cout<<"derived class function called"<<endl;
}

void main()
{
	clrscr();
	base *ptr;
	base b1;
	derived d1;

       //	ptr=&b1;
       //	ptr->show();

	ptr=&d1;
	ptr->show();
	getch();
}
