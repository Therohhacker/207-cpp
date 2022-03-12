#include<iostream.h>
#include<conio.h>
void main()
{
int i,fact=1,number;
clrscr();
cout<<"Enter any number";
cin>>number;
for(i=1;i<=number;i++)
{
fact=fact*i;
}
cout<<"Factorial of"<<number<<"is:"<<fact<<endl;
getch();

}


