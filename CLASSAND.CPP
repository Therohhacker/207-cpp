#include<iostream.h>
#include<conio.h>

class student
{
	private:
	  int rollno;
	  char name[44];
	  int mark;
       public:
	 void get();
	 void put();
};

void student :: get()
{
	cout<<"enter a name"<<endl;
	cin>>name;
	cout<<"enter rollno"<<endl;
	cin>>rollno;
	cout<<"enter marks"<<endl;
	cin>>mark;

}

void student :: put()
{
	cout<<rollno<<"\t\t";
	cout<<name<<"\t\t";
	cout<<mark<<endl;
}
void main()
{
	clrscr();
	student rohit,jayesh;
	rohit.get();
	jayesh.get();
	cout<<"\n**********************************************"<<endl;
		cout<<"ROLLNO\t\tNAME\t\tMARK"<<endl;
	rohit.put();
	jayesh.put();

	getch();
}