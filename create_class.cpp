#include<iostream>
using namespace std;
class Room{
    public: 
    double length;
    double breadth;
    double height;

    double calculateArea(){
        return length * breadth;
    }
    double calculateValume()
    {
        return length * breadth * height;
    }

};
int main(){
    Room obj;
    obj.length=3;
    obj.breadth=4;
    obj.height=5;
    cout<<"Area of room= "<<obj.calculateArea()<<endl;
    cout<<"Volume of room= "<<obj.calculateValume()<<endl;
    return 0;

}