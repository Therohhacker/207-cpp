#include<iostream.h>
#include<conio.h>

class Student
{
	protected:
		int rollno;
		char name[22];
	public:
		void get();
		void put();
};
class Mark:public Student
{
	protected:
		int m1,m2,m3;
	public:
		void get_marks();
		void put_marks();
};
class Result:public Mark
{
	protected:
		int total;
	public:
		void display();
};

void Student::get()
{
	cout<<"Enter your name :";
	cin>>name;
	cout<<"Enter your roll no :";
	cin>>rollno;
}
void Student::put()
{
	cout<<"The Name of Student is -->"<<name<<endl;
	cout<<"The Roll No of Student is -->"<<rollno<<endl;
}
void Mark::get_marks()
{
	get();
	cout<<"Enter marks of fisrt subject :";
	cin>>m1;
	cout<<"Enter marks of second subjec :";
	cin>>m2;
	cout<<"Enter marks of third subject :";
	cin>>m3;
}
void Mark::put_marks()
{
	cout<<endl;
	put();
	cout<<"The marks Three subject of student is :"<<endl;
	cout<<"first subject -->"<<m1<<endl;
	cout<<"second subject -->"<<m2<<endl;
	cout<<"third subject -->"<<m3<<endl;
}

void Result::display()
{
	get_marks();
	put_marks();
	int percent;
	percent = ((m1+m2+m3)*100)/300;
	cout<<"The Total of three subject is -->"<<percent<<"%"<<endl;
}
void main()
{
	clrscr();
	Result r;
	r.display();
	getch();
}