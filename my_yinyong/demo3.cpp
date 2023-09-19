#include<iostream>
using namespace std;
typedef int arry[5];
int main(){
    #if 0
    arry a={1,2,3,4,5};
    cout<<a[0]<<a[1]<<endl;
    arry &b=a;
    cout<<b[0]<<b[1]<<endl;
    #endif

    #if 1
    int a[5]={1,2,3,4,5};
    cout<<a[0]<<a[1]<<endl;
    int (&b)[5]=a;
    cout<<b[0]<<b[1]<<endl;
    char c[6]="hello";
    char (&d)[6]=c;
    cout<<"c:"<<c<<"\td:"<<d<<endl;
    #endif
}