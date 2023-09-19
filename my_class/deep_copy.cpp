#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Test
{
private:
    /* data */
    char *name;
    int age;
public:
    Test(/* args */const char *name,int age);
    Test(const Test &other);
    void show();
    ~Test();
};
void Test::show(){
    cout<<"name:"<<(int*)this->name<<endl;
    cout<<"name:"<<this->name<<"\tage:"<<this->age<<endl;
}
Test::Test(const Test &other){
    //重新指向一块新的内存地址
    this->name=new char[20];
    strcpy(name,other.name);
    this->age=other.age;
}
Test::Test(/* args */const char *name,int age)
{
    this->name=new char[20];
    strcpy(this->name,name);
    this->age=age;
}

Test::~Test()
{
    cout<<"析构函数:"<<this<<endl;
}
int main(){
    Test t("tom",18);
    t.show();
    Test t2=t;
    t2.show();
    return 0;
}