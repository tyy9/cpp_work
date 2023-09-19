#include<iostream>
using namespace std;
class Test
{
private:
    /* data */
    string name;
    int age;
    double data;
public:
    Test(/* args */string name="tom",int age=18){
        cout<<"name:"<<name<<"age:"<<age<<"data:"<<data<<endl;
    }
    Test(/* args */double data){
        cout<<"name:"<<name<<"age:"<<age<<"data:"<<data<<endl;
    }
};
int main(){
    //Test t();
    Test *p=new Test();
    Test *p2=new Test;
    //t=10.2;
    //t=Test();
    return 0;
}

