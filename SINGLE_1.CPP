#include<iostream.h>
#include<conio.h>

class Student
{
	private:
		int rollno;
		char name[33];
	public:
		void set_data();
		void display();
};
class Fybca:public Student
{
	private:
		int m1,m2,m3;
	public:
		void set_marks();
		void display_marks();
		void percent();
};

void Student::set_data()
{
	cout<<"enter your roll no :";
	cin>>rollno;
	cout<<"enter your name :";
	cin>>name;
}
void Student::display()
{
	cout<<endl;
	cout<<"The Name of Student is -->"<<name<<endl;
	cout<<"The Roll No of Student is -->"<<rollno<<endl;
}
void Fybca:: set_marks()
{
	cout<<"Enter your mark of first subject :";
	cin>>m1;
	cout<<"Enter your marks of second subject :";
	cin>>m2;
	cout<<"Enter your marks of third subject :";
	cin>>m3;
	cout<<endl;
}
void Fybca::display_marks()
{
	cout<<"The marks of your All Subject are :"<<endl;
	cout<<"first subject -->"<<m1<<endl;
	cout<<"second subject -->"<<m2<<endl;
	cout<<"third subject -->"<<m3<<endl;
}
void Fybca::percent()
{
	int per;
	per = ((m1+m2+m3)*100)/300;
	cout<<"The Total percentage of Student is -->"<<per<<"%"<<endl<<endl;
}

void main()
{
	clrscr();

	Fybca rohit;
	rohit.set_data();
	rohit.set_marks();
	rohit.display();
	rohit.display_marks();
	rohit.percent();

	Fybca jayesh;
	jayesh.set_data();
	jayesh.set_marks();
	jayesh.display();
	jayesh.display_marks();
	jayesh.percent();
	getch();
}