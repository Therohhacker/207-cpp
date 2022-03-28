#include<iostream.h>
#include<conio.h>
class student
{
	private:
	 int rollno;
	 char name[34];
	public:
	void get();
	void put();
};

void student::get()
{
	cout<<"enter the rollno of student"<<endl;
	cin>>rollno;
	cout<<"enter the name of student"<<endl;
	cin>>name;
}
void student::put()
{
	cout<<"the rollno of student is"<<rollno<<endl;
	cout<<"the name of student is "<<name<<endl;
	cout<<endl;
}
void main()
{
	clrscr();
	student s[5];
	for(int i=0; i<5; i++)
	{
		s[i].get();
	}
	cout<<"*******************************put function call****************************"<<endl;
	for(i=0; i<5; i++)
	{
		s[i].put();
	}
	getch();
}