#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream of;
    of.open("1.txt",ostream::app);
    of.write("hello",5);
    of.close();
    return 0;
}