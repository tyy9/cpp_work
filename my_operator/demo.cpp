#include<iostream>
using namespace std;
class  Cat
{
private:
    /* data */
    int age;
public:
     Cat(/* args */int age);
     int operator>(Cat &other){
        if(age>other.age){
            return 0;
        }else{
            return -1;
        }
     }
     int operator>(int num){
        if(age>num){
            return 0;
        }else{
            return -1;
        }
     }
     //------------------
     int operator<(Cat &other){
        if(age<other.age){
            return 0;
        }else{
            return -1;
        }
     }
     int operator<(int num){
        if(age<num){
            return 0;
        }else{
            return -1;
        }
     }
     //---------------
     int operator==(Cat &other){
        if(age==other.age){
            return 0;
        }else{
            return -1;
        }
     }
     int operator==(int num){
        if(num==age){
            return 0;
        }else{
            return -1;
        }
     }
    friend int operator<(int num,Cat &cat);
    friend int operator>(int num,Cat &cat);
    ~ Cat();
};

 Cat:: Cat(/* args */int age):age(age)
{
}

 Cat::~ Cat()
{
}

int operator>(int num,Cat &cat){
    if(num>cat.age){
        return 0;
    }else{
        return -1;
    }
}

int operator<(int num,Cat &cat){
    if(num<cat.age){
        return 0;
    }else{
        return -1;
    }
}

int main(){
    Cat c1(20);
    Cat c2(20);
    int ret=21>c1;
    cout<<ret<<endl;
    return 0;
}