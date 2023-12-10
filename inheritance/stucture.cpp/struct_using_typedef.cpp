// struct using typedef
#include<iostream>
using namespace std;

typedef struct num{
    int a;
    float b;
    string c;

} obj;
int main()
{
    obj obj1;
    obj1.a=10;
    obj1.b=12.34;
    obj1.c="simu";
    cout<<"The value of  a is = "<<obj1.a<<endl;
    cout<<"The value of  b is = "<<obj1.b<<endl;
    cout<<"The value of  c is = "<<obj1.c<<endl;
    return 0;
}
