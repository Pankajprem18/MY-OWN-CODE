#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    ifstream ff("file.cpp");
    while(!ff.eof())
    {
        ff.get(ch);
        cout<<ch;
    }
    ff.close();
    return 0;
}