#include<iostream>
#include<set>
using namespace std;
typedef struct Student{
    int age;
    string name;
    friend bool operator==(const struct Student& s1,const struct Student& s2);
    friend bool  operator<(const struct Student& s1,const struct Student& s2);
}Student;

bool operator==(const struct Student& s1,const struct Student& s2){
    if(s1.age==s2.age){
        return false;
    }else{
        return true;
    }
}

bool operator<(const struct Student& s1,const struct Student& s2){
    cout<<"s1:"<<s1.name<<"\ts2:"<<s2.name<<endl;
    if(s1.age<s2.age){
        return  ;
    }else{
        return false;
    }
}

int main(){
    Student s1={18,"tom"};
    Student s2={20,"jack"};
    Student s3={15,"marry"};
    Student s4={18,"tom4"};
    set<struct Student> s;
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);
    for(auto stu:s){
        cout<<stu.name<<endl;
    }
    return 0;
}