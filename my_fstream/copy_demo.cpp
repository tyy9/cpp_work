#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
    char buf[1024*1024];
    ifstream in;
    in.open("1.jpg");
    ofstream on;
    on.open("2.jpg");
    while (!in.eof())
    {
        bzero(buf,sizeof(buf));
        in.read(buf,1024*1024);
        on.write(buf,in.gcount());
    }
    
    on.close();
    in.close();
    return 0;
}