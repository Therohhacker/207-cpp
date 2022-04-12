
#include <iostream.h>
#include<conio.h>

class construct{
    public:
    construct(int a, int b){
        cout<<(a+b)<<endl;
    }
    
    ~construct(){
        cout<<"the destructor is called"<<endl;
    }
    
    void display(){
        cout<<"hello World"<<endl;
        
    }
};
int main()
{
    clrscr();
    // printf("Hello World");
    construct a(12,43);
    a.display();
    getch();

    return 0;
}
