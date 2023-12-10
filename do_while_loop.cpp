#include<iostream>
using namespace std;
int main()
{
    int j;
    cout<<"print Table of:"<<endl;
    cin>>j;
    
    cout<<"Table of "<< j <<" is:"<<endl;
    int i=1;
    do
        {
       
       cout<<j*i<<endl;
       i++;
    }
    while(i<11);
    cout<<endl;
}
