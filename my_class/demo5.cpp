#include<iostream>
using namespace std;
class Test
{
private:
    /* data */
public:
    Test(/* args */);
    Test(const Test &other){
        cout<<"拷贝"<<endl;
    }
    ~Test();
};

Test::Test(/* args */)
{
    cout<<"构造"<<endl;
}

Test::~Test()
{
}
int main(){
    Test t;
    Test *p=&t;
    Test b=*p;
    return 0;
}
