#include<iostream>
using namespace std;
int test(int n){
    if(n<60){
        throw "小于60";
    }else{
        throw -1;
    }
}
int main(){
    try{
        test(50);
    }catch(...){
        cout<<"1"<<endl;
    } 
    return 0;
}