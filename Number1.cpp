#include<iostream>
using namespace std;
class Number1
{
    int a;
    public:
    Number1(int x);
    void show();
};

Number1::Number1(int x)
{
    cout<<"parameterised constructor\n";
    a=x;
}
void Number1::show(){
    cout<<a;
}
int main(){
    Number1 ob(4);
    ob.show();
}