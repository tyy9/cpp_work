#include<iostream>
using namespace std;
class Test
{
private:
    /* data */
    int age;
public:
    Test(/* args */int age=0);
    ~Test();
    void show(){
        cout<<"age:"<<age<<endl;
    }
    friend Test operator++(Test &test,int n);
    friend Test operator++(Test &test);
    friend Test operator--(Test &test,int n);
    friend Test operator--(Test &test);
};

Test::Test(/* args */int age):age(age)
{
}

Test::~Test()
{
}

Test operator++(Test &test,int n){
    Test temp;
    cout<<"后置++"<<endl;
    temp.age=test.age;
    temp.age+=1;
    return temp;
}
Test operator++(Test &test){
    Test temp;
    cout<<"前置++"<<endl;
    temp.age=test.age;
    temp.age+=1;
    return temp;
}

//------------

Test operator--(Test &test,int n){
    Test temp;
    cout<<"后置--"<<endl;
    temp.age=test.age;
    temp.age-=1;
    return temp;
}
Test operator--(Test &test){
    Test temp;
    cout<<"前置--"<<endl;
    temp.age=test.age;
    temp.age-=1;
    return temp;
}

int main(){
    Test t(4);
    Test t2=t++;
    Test t3=++t;
    Test t4=operator++(t,34343);
    Test t5=t--;
    t2.show();
    t3.show();
    t4.show();
    t5.show();
    return 0;
}