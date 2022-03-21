#include<iostream.h>
#include<conio.h>
class custmer
{
	private:
	   char name[55];
	   char mobileno[15];
	   char city[15];
       public:
	  void getdata();
	  void display();
};

void custmer::getdata()
{
	cout<<"enter a name"<<endl;
	cin>>name;
	cout<<"enter a city"<<endl;
	cin>>city;
	cout<<"enter mobile number"<<endl;
	cin>>mobileno;
}

void custmer::display()
{
	cout<<endl<<name<<endl;
	cout<<city<<endl;
	cout<<mobileno<<endl;
}
void main()
{
	clrscr();
	custmer hello;
	hello.getdata();
	hello.display();
	getch();
}