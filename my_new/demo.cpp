#include<iostream>
#include<cstring>
using namespace std;
typedef struct Student{
    char name[256];
    int age;
    float subject_grade;
}stu;
int main(){
    int *p=new int[3];
    stu *stu_p=new stu;
    stu_p->age=10;
    strcpy(stu_p->name,"tom");
    stu_p->subject_grade=99.9;
    p[0]=1;
    p[1]=2;
    p[2]=3;
    cout<<"p[0]="<<p[0]<<"p[1]="<<p[1]<<"p[2]="<<p[2]<<endl;
    cout<<"name:"<<stu_p->name<<"age:"<<stu_p->age<<"subject_grade:"<<stu_p->subject_grade<<endl;
    delete p;
    delete stu_p;
    return 0;
}