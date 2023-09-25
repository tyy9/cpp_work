#include<iostream>
using namespace std;
int main(){
    int a=55;
    const int *p=&a;
    int *q=const_cast<int *>(p);
    *q+=1;
    cout<<a<<endl;
}
