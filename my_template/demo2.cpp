#include<iostream>
using namespace std;

template<typename T>
class Test
{
private:
    /* data */
    T *p;
public:
    Test(/* args */){
        cout<<"1"<<endl;
        p=new T[10];
    }
    ~Test(){
        delete []p;
    }       
};

template<>
class Test<int>
{
private:
    /* data */
    int *p;
public:
    Test(/* args */){
        cout<<"2"<<endl;
        p=new int[10];
    }
    ~Test(){
        delete []p;
    }
};
int main(){
    Test<int> t;
    //显式具体化>隐式实例，普通类与模板类无法共存
    return 0;
}

