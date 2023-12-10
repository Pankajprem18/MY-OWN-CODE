#include<iostream>
using namespace std;
int main(){
    int i,j,x;
    for(i=1;i<=5;i++)
    {
        x=i;
        for(j=1;j<=5;j++){
            
            cout<<x<<" ";
            x=x+5;
        }
        cout<<endl;
    }
}