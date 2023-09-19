#include<iostream>
using namespace std;
void test(int a){
    cout<<"test---a:"<<a<<endl;
}
// void test(int &a){
//     cout<<"test---a:"<<a<<endl;
// }
int main(){
    int a=10;
    int &y_a=a;
    float b=2.1;
    float &y_b=b;
    double c=2.452;
    double &y_c=c;
    char d='h';
    char &y_d=d;
    cout<<"a:"<<a<<"\tb:"<<b<<"\tc:"<<c<<"\td:"<<d<<endl;
     cout<<"y_a:"<<y_a<<"\ty_b:"<<y_b<<"\ty_c:"<<y_c<<"\ty_d:"<<y_d<<endl;
     test(a);
     test(y_a);
     return 0;
}