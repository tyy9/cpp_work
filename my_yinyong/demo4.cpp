#include<iostream>
using namespace std;
void exchange(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    #if 0
    int a=10,b=20;
    int &y_a=a;
    int &y_b=b;
    cout<<"before--a:"<<a<<"\tb:"<<b<<endl;
    exchange(y_a,y_b);
    cout<<"after--a:"<<a<<"\tb:"<<b<<endl;
    #endif

    #if 1
    int a[3]={1,2,3};
    int * const &b=a;
    cout<<b[1]<<endl;
    #endif
    return 0;
}