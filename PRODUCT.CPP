#include<iostream.h>
#include<conio.h>
class product
{
	private:
		int productno;
		char name[44];
		char productcompany[55];
		int price;
	public:
		void getdata();
		void putdata();
};

void product::getdata()
{
	cout<<"enter a product number"<<endl;
	cin>>productno;
	cout<<"enter a product name"<<endl;
	cin>>name;
	cout<<"enter company name of product"<<endl;
	cin>>productcompany;
	cout<<"enter price of product"<<endl;
	cin>>price;
	cout<<endl;
}

void product::putdata()
{
	cout<<productno<<"\t\t";
	cout<<name<<"\t\t";
	cout<<productcompany<<"\t\t";
	cout<<price<<endl;
}

void main()
{
	clrscr();
	product p[3];

	for(int i=0; i<3; i++)
	{
		p[i].getdata();
	}
	cout<<"*****************************output***************************"<<endl;
	cout<<"no\t\t"<<"name\t\t"<<"company\t\t"<<"price"<<endl;
	cout<<"______________________________________________________________"<<endl;
	for(i=0; i<3; i++)
	{
		p[i].putdata();
		cout<<"_____________________________________________________________"<<endl;
	}
	getch();
}