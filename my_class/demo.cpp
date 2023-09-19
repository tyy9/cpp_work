#include<iostream>
using namespace std;
class Test{
    private:

    public:
        void my_test();
};
void Test::my_test(){
    cout<<"test"<<endl;
}
int main(){
    // Test *p=new Test;
    // p->my_test();
    Test t;
    // Test *p=&t;
    Test &b=t;
    b.my_test();
    return 0;
}