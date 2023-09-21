#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    //常用方法
    #if 0
    //assgin()=>为容器添加数据
    //如果不是数组则assgin(数量,数值)
    //v.assign(3,100);
    //如果时数组则assgin(数组的第一个下标，数组的最后一位下标+1)[0,end+1)
    int buf[5]={14,78,23,56,145};
    v.assign(buf,buf+5);
    for(int i:v){
        cout<<i<<endl;
    }
    #endif
    return 0;
}