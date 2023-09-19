#include<iostream>
using namespace std;
int main(){
    #if 0
    int a=10;
    int *p=&a;
    int *&b=p;
    cout<<"a:"<<a<<"\tp:"<<*p<<"\tb:"<<*b<<endl;
    cout<<"p--"<<"a:"<<&a<<"\tp:"<<p<<"\tb:"<<b<<endl;

    #endif
    #if 1
    //string
    char c[]="hello";
    char *p=c;
    char *&b=p;
    b[0]='l';
    cout<<"c:"<<c<<"\tp:"<<p<<"\tb:"<<b<<endl;
    cout<<"p--"<<"c:"<<(int*)c<<"\tp:"<<(int*)p<<"\tb:"<<(int*)b<<endl;
    #endif
    return 0;
}