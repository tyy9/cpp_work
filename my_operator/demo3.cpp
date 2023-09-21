#include<iostream>
#include<vector>
using namespace std;
class Cat
{
private:
    /* data */
    string name;
    int age;
public:
    Cat(/* args */int age,string name);
    ~Cat();
    friend ostream& operator<<(ostream &cout,Cat &cat);
};

Cat::Cat(/* args */int age,string name):age(age),name(name)
{
}

Cat::~Cat()
{
}
ostream& operator<<(ostream &cout,Cat &cat){
    cout<<"cat--"<<"name:"<<cat.name<<"\tage:"<<cat.age;
    return cout;
}
int main(){
    Cat cat(10,"cat");
    Cat cat2(20,"dog");
    cout<<cat<<cat2<<endl;
    return 0;
}