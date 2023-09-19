#include<iostream>
using namespace std;
void count(int width,int height,int flag){
    cout<<"1--width:"<<width<<"\theight:"<<height<<endl;
}
void count(int width=10,int height=20){
    cout<<"2--width:"<<width<<"\theight:"<<height<<endl;
}
int main(){
    count(80,40);
    count(10,20);
    count(20,30);
    return 0;
}