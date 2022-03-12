//program to demostrate classes and objects.

#include<iostream.h>
#include<conio.h>

class student           //class defined here.
{
	public:         //access specifier.
	int rollno;     //data members.
	char name[10];

	void display()  //member function.
	{
	 cout<<"I am in class Now";
	}
};

int main()
{
	clrscr();
	student s;      //object declared and memory alloacted here

	cout<<"enter a  roll number"<<endl;
	cin>>s.rollno;
	cout<<"enter a name"<<endl;
	cin>>s.name;
	cout<<endl;
	cout<<"roll no is = "<<s.rollno<<endl;
	cout<<"name is = "<<s.name<<endl;

	s.display();    //display function call here
	getch();
}