#include<iostream>
using namespace std;
struct num
{
    int a;
    float b;
    string c;

};
int main()
{
    struct num obj;
    obj.a=10;
    obj.b=12.3;
    obj.c="Monu";
    cout<<"The value of a is ="<<obj.a<<endl;
    cout<<"The value of b is ="<<obj.b<<endl;
    cout<<"The value of c is ="<<obj.c<<endl;
    return 0;
}