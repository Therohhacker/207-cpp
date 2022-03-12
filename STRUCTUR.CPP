#include<iostream.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[10];

};

int main()
{
	clrscr();
	student s;
	cout<<"enter a  roll number"<<endl;
	cin>>s.rollno;
	cout<<"enter a name"<<endl;
	cin>>s.name;
	cout<<endl;
	cout<<"roll no is = "<<s.rollno<<endl;
	cout<<"name is = "<<s.name<<endl;
	getch();
}