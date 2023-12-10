#include<iostream>
using namespace std;
class cons
{
    int a,b,x,y;
    public:
    cons()
    {
        cout<<"Default constructor\n";
        x=y=0;
    }
    cons(int x);
    cons(int x,int y);
    void show();
};
cons::cons(int x)
{
    cout<<"\n In one parameter constructor\n";
    a=x;
    b=0;
}
cons::cons(int x, int y)
{
    cout<<"In two parameter constructor\n";
    a=x;
    b=y;
}
void cons::show()
{
    cout<<a<<"\n"<<b;
}
int main()
{
    // cons ob();
    // ob.show();
    cons ob1(5);
    ob1.show();
    cons ob2(5,10);
    ob2.show();
}