#include<iostream>
using namespace std;
class myEx:public exception
{
private:
    /* data */
public:
    myEx(/* args */);
    const char *what()const throw(){
        cout<<"自定义ex"<<endl;
        return "custom";
    }
    ~myEx();
};

myEx::myEx(/* args */)
{
}

myEx::~myEx()
{
}

int fun(int n){
    if(n>60){
        cout<<"<60"<<endl;
        throw myEx();
    }else if(n<60){
        throw out_of_range("<60");
    }
}
int main(){
    try{
        fun(78);
    }catch(exception &e){
        cout<<"-----"<<endl;
       cout<< e.what()<<endl;
    }
    return 0;
}
