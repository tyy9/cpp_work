#include<iostream>
#include <sstream>
#include <limits>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a;
    if(!cin.good()){
        cout<<"输入有误"<<endl;
    }else{
        cout<<"a--:"<<a<<endl;
    }
    cin.clear();
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');//清空输入缓冲区
    if(!cin.good()){
        cout<<"输入有误"<<endl;
    }
    cin>>b;
     cout<<"b--:"<<b<<endl;
    //cout<<"flag:"<<cin.good()<<endl;
    return 0;
}