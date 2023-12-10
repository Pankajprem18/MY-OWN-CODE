#include<iostream>
using namespace std;
class LPU
{
    public:
    string course;
    void printname()
    {
        cout<<"CPP Teacher name= "<<course;
    }
};
int main(){
    LPU OBJ;
    OBJ.course="Hello, Girish";
    OBJ.printname();
    return 0;
}