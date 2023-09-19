#include<iostream>
using namespace std;
class Test
{
private:
    /* data */
    int data;
public:
    Test(/* args */int _data);
};
//自行赋值
Test::Test(/* args */int _data):data(_data)
{
    cout<<"构造函数"<<data<<endl;
}
int main(){
    Test t(2);//使用栈空间
    Test *p=new Test(3);//使用堆空间
    string str;
    delete p;
    return 0;
}

