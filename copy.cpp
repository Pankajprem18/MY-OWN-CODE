#include<iostream>
using namespace std;
class myclass
{
    // int data;
    public:
    myclass()
    {
        cout<<"Default constructor called"<<endl;
    }
    myclass(int val):data(val)
    {
        cout<<"Parameterized constructor called with value "<<val<<endl;
    }
     myclass(const myclass& other){
        data=other.data;
        cout<<"Copy constructor called"<<endl;
     }
      void displayData(){
        cout<<"Data: "<<data<<endl;
      }
      private:
      int data;
};
 int main()
 {
    myclass obj1;
    myclass obj2(42);
    myclass obj3 = obj2;
    obj2.displayData();
    obj3.displayData();
    return 0;
    
 }