// C++ program to illustrate the use of the unions
#include<iostream>
using namespace std;
union GFG
{
    int value1;
    char value2;
    float value3;
};
int main(){
    union GFG V1;
    V1.value1=23;
    cout<<"The first value at "
       <<"the allocated memory : "<<V1.value1<<endl;
    V1.value2='M';
    cout<<"The next value stored "
    <<"after removing the "
    <<"privious value : "<<V1.value2<<endl;
    V1.value3=34.34;
    cout<<"The final value "
    <<"at the same allocted "
    <<"memory space : "<<V1.value3<<endl;
        return 0;
}
