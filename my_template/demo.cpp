#include<iostream>
using namespace std;

template<typename T>
T add(T a,T b){
    cout<<"1"<<endl;
    return a+b;
}

// int add(int a,int b){
//     cout<<"2"<<endl;
//     return a+b;
// }

template<>
int add<int>(int a,int b){
    cout<<"3"<<endl;
    return a+b;
}

int main(){
    add(1,2);//调用优先级:普通函数>模板函数
    add(1,2);//调用优先级:显式具体化>隐式实例化
    //add<int>(1,2);
    return 0;
}