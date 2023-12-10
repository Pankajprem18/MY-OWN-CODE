#include<iostream>
using namespace std;
class room
{
    private:
    double length, breadth, height;

    public:
    void initdata(double lnth, double brth, double hght)
    {
        length=lnth;
        breadth=brth;
        height=hght;
    }
    double calculateArea(){
    return length * breadth;
    }
    double calculateVolume(){
        return length * breadth * height;
    }
};
int main(){
    room obj;
    obj.initdata(12.3,23,45.5);
    cout<<"Area of Room= "<<obj.calculateArea()<<endl;
    cout<<"Volume of Room= "<<obj.calculateVolume()<<endl;
    return 0;
}