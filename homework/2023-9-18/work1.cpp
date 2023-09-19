#include<iostream>
#include<cstdlib>
using namespace std;
struct Student{
    int age;
    string name;
    int score[5];
};
template<typename T>
class Array
{
private:
    /* data */
    
public:
    Array(/* args */){

    }
    void sort(T *list,int length){
        cout<<"before--sort:"<<endl;
        for(int i=0;i<length;i++){
            cout<<list[i]<<endl;
        }
        for(int i=0;i<length-1;i++){
            for(int j=0;j<length-1-i;j++){
                if(list[j]<list[j+1]){
                  int temp=list[j];
                  list[j]=list[j+1];
                  list[j+1]=temp;  
                }
            }
        }
         cout<<"after--sort:"<<endl;
        for(int i=0;i<length;i++){
            cout<<list[i]<<endl;
        }
    }
    ~Array(){

    }
};
//--------
//适用于struct类型的模板类
template<>
class Array<struct Student *>
{
private:
    /* data */
public:
    Array(/* args */){

    }
    void sort(struct Student * list,int size){
        cout<<"struct size:"<<size<<endl;
    }
    ~Array(){

    }
};

int main(){
    struct Student stu,*stu_p;
    stu.age=18;
    stu.name="tom";
    for(int i=0;i<5;i++){
        stu.score[i]=rand()%100;
        cout<<"NO."<<i<<":\t"<<stu.score[i]<<endl;
    }
    Array<int> a;
    a.sort(stu.score,5);
    //struct模板类
    Array<struct Student *> a2;
    stu_p=&stu;
    a2.sort(stu_p,sizeof(stu));
    return 0;
}