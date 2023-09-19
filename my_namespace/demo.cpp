#include<iostream>
using namespace std;
void test();
namespace t_namespace{
    int n=10;
    char a[]="hello";
    void test(){
        cout<<"命名空间函数"<<endl;
    }
    int count(){
        return 3;
    }
}
void test(){
    cout<<"测试函数"<<endl;
}
int main(){
    cout<<"n="<<t_namespace::n<<endl;
    cout<<"a="<<t_namespace::a<<endl;
    test();
    t_namespace::test();
    cout<<"count="<<t_namespace::count()<<endl;
    return 0;
}