#include<iostream.h>
#include<conio.h>

class Student
{
	protected:
		 int rollno;
		 char name[33];
	public:
		void get();
		void show();
};
class Mark
{
	protected:
		int m1,m2,m3;
	public:
		void get_marks();
		void show_marks();
};

class Result:public Student, public Mark
{
	protected:
		int percent;
	public:
		void get_total();
		void show_total();
};

void Student::get()
{
	cout<<"enter your name :";
	cin>>name;
	cout<<"enter your rollno :";
	cin>>rollno;
}
void Student::show()
{
	cout<<"The name of student is -->"<<name<<endl;
	cout<<"The roll no of student is -->"<<rollno<<endl;
}
void Mark::get_marks()
{
	cout<<"Enter marks of three subject :"<<endl;
	cout<<"enter mark of first subject :";
	cin>>m1;
	cout<<"enter mark of second subject :";
	cin>>m2;
	cout<<"enter mark of third subject :";
	cin>>m3;
}
void Mark::show_marks()
{
	cout<<"The marks of three subject are :"<<endl;
	cout<<"first subject -->"<<m1<<endl;
	cout<<"second subject -->"<<m2<<endl;
	cout<<"third subject -->"<<m3<<endl;
}

void Result::get_total()
{
	get();
	get_marks();
	percent = m1+m2+m3;
}
void Result::show_total()
{
	cout<<endl;
	cout<<"*************** Detail of "<<name<<"**************"<<endl<<endl;
	show();
	show_marks();
	cout<<"The percent of three marks of "<<name<<" is --> "<<percent<<endl;
	cout<<endl;
}
void main()
{
	clrscr();
	Result r;
	r.get_total();
	r.show_total();

	Result r1;
	r1.get_total();
	r1.show_total();
	getch();
}