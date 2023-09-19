#include<iostream>
#define PI 3.14
using namespace std;
void count(int width,int height){
    // printf("square:%d",width*height);
    cout<<"square "<<width*height<<endl;
}//正方形
void count(float a,float b){
    // printf("square:%d",width*height);
    cout<<"trigle "<<(a*b)/2<<endl;
}//直角三角形
void count(float r){
    // printf("square:%d",width*height);
    cout<<"circle "<<PI*r*r<<endl;
}//圆形
int main(){
    int height,width;
    height=width=10;
    float a,b;
    a=4;
    b=5;
    int r=2.5;
    count(width,height);
    count(a,b);
    count(r);
    return 0;
}