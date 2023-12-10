// #include<istream>
#include<iostream>
using namespace std;
int c=0;
class A
{
    public:
    A()
    {
        c++;
        cout<<c<<"constructed \n";
    }
    ~A(){
        cout<<c<<"detected \n";
        c--;
    }
};
int main(){
    A OB1;
    {
        A OB2;

    }
    A OB3, OB4;

}