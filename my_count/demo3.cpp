#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool my_sort(const int &x2, const int &x1)
{
    cout<<"x1:"<<x1<<"\tx2:"<<x2<<endl;
    if (x1 % 2 == 0)
    {
        if (x2 % 2 == 0)
        {
            return x1>x2;
        }
        else if(x2%2==1){
            return true;
        }
    }
    else if (x1 % 2 == 1)
    {
        if(x2%2==1){
            return x1<x2;
        }else if(x2%2==0){
            return false;
        }
    }
}
int main()
{
    int a[] = {45,34,47,78,56};
    vector<int> v(a, a + 5);
    //sort函数中,x1为第二个，x2为第一个
    sort(v.begin(), v.end(), my_sort);
    for(auto i:v){
        cout<<i<<endl;
    }
    return 0;
}