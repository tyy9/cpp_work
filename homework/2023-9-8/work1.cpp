#include<iostream>
#include<bitset>
#include<iomanip>
using namespace std;
int main(){
    int a=12;
    double b=10.25468;
    cout<<"before--b:"<<b<<endl;
    cout<<"after--b:"<<fixed<<setprecision(2)<<b<<endl;//保留2位小数,单独使用setprecision表示显示多少位数，fixed--定点表示法
    cout<<"a:"<<a<<endl;//十进制
    cout<<"a:--bit:"<<(bitset<32>)a<<endl;//二进制
    cout<<"a--hex: "<<hex<<a<<endl;//十六进制显示
    cout<<"a--oct: "<<oct<<a<<endl;//八进制显示
    return 0;
}