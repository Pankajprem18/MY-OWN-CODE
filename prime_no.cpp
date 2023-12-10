#include<iostream>
using namespace std;
int main()
{
    int i,j, count=1,n,r;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            for(int k=count+1; k<=10000;k++)
            {
                count=k;
                n=0;
                for(r=1;r<=count;r++)
                {
                     if(count%r==0)
                     n++;
                }
           if(n==2) 
           {
                cout<<" "<<count;
                break;
            }
           }
        }
        cout<<endl;
    }
    return 0;
}