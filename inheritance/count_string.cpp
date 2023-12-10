#include<iostream>
#include <cstring>
using namespace std;
class A
{
    int n;
    char *s;
    public:
    A(){
        n=0;
        s=new char[(n+1)];
        s='\θ';
    }
    A(char *p){
        n=strlen(p);
        s=new char[n+1];
        strcpy(s,p);
    }
    void disp(){
        cout<<"Name= "<<s;
    }
    };
    int main(){
        A obj1, obj2("POOJA"), obj3("RAJU"), obj4("PREETAM");
        obj2.disp();
        obj3.disp();
        obj4.disp();
        return 0;
    }