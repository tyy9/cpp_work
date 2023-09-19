#include<iostream>
#include<cstring>

using namespace std;
class Animal{
    public:
       char name[256];
    public:
        void Animal_name(char *name){
            strcpy(this->name,name);
            cout<<"name:"<<this->name<<endl;
        }
};
int main(){
    Animal animal;
    animal.Animal_name("cat");
    return 0;
}