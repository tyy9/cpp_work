#include<iostream>
using namespace std;
class Cat
{
private:
    /* data */
    int age;
public:
    Cat(/* args */int age);
    int operator+(Cat &c){
        return this->age+c.age;
    }
    int operator+(int num){
        return this->age+num;
    }
    ~Cat();
};

Cat::Cat(/* args */int age):age(age)
{
}

Cat::~Cat()
{
}
int main(){
    Cat c1(18);
    Cat c2(20);
    int num=10;
    cout<<c1.operator+(c2)<<endl;//第一种调用方法
    cout<<c1+c2<<endl;//第二种调用方法
    cout<<c1.operator+(num)<<endl;
    cout<<c1+num<<endl;
    return 0;
}