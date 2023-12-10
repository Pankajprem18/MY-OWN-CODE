#include<iostream>
using namespace std;
int main()
{
    int j;
    cout<<"print Table of:"<<endl;
    cin>>j;
    
    cout<<"Table of "<< j <<" is:"<<endl;
    int i=1;
    while(i <= 10)
        {
       
       cout<<j*i<<endl;
       i++;
    }
    cout<<endl;
}
