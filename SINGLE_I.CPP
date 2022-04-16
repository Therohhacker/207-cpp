#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int roll_no;
		char name[15];
	public:
		void getinfo();
		void show();

};

class mark: public student
{
	private:
		int m1,m2,m3;
	public:
		void getdata();
		void display();
};

void student::getinfo()
{
	cout<<"Enter Roll No of student"<<endl;
	cin>>roll_no;
	cout<<"Enter name of student"<<endl;
	cin>>name;
}
void mark::getdata()
{
	cout<<"enter marks of three subject"<<endl;
	cout<<"enter mark of first subject"<<endl;
	cin>>m1;
	cout<<"enter mark of second subject"<<endl;
	cin>>m2;
	cout<<"enter marks of third subject"<<endl;
	cin>>m3;
}
void student ::show()
{
	cout<<"the rollno of student is :"<<roll_no<<endl;
	cout<<"the name of student is ;"<<name<<endl;
}
void mark::display()
{
	cout<<"the marks of three student is as follow:"<<endl;
	cout<<"the marks of first subject is :"<<m1<<endl;
	cout<<"the marks of second subject is :"<<m2<<endl;
	cout<<"the marks of third subject is :"<<m3<<endl;
}
void main()
{
	clrscr();
	mark m;
	m.getinfo();
	m.getdata();
	m.show();
	m.display();

	getch();
}