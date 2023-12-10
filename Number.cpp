#include<iostream>
using namespace std;
class Number
{
    int a;
    public:
    Number();
    void show();
};
Number::Number()
{
    cout<<"constructor\n";
    a=100;
}
void Number::show()
{
    cout<<a;
}
int main()
{
    Number ob;
    ob.show();
    //return 0;
}