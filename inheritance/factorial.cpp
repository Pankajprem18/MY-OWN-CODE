// write a program to print factorial no. using class
#include<iostream>
using namespace std;
class fact
{
    int n,f;
    public:
    fact(int a)
    {
        n=a, f=1;
    }
    void disp(){
        cout<<"factoral= "<<f;
    }
    void call();
};
void fact::call(){
    int i;
    for(i=1; i<=n; i++)
    f=f*i;
}

int main(){
    int no;
    cout<<"Enter no: ";
    cin>>no;
    fact obj(no);
    obj.call();
    obj.disp();
    return 0;
}