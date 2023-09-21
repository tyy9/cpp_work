#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> int_v;
    int_v.push_back(10);
    int_v.push_back(12);
    int_v.push_back(15);
    int_v.push_back(105);
#if 0
    for(int i=0;i<int_v.size();i++){
        cout<<int_v.at(i)<<endl;
    }
#endif
#if 0
    // 使用迭代器
    // 读写迭代器
    //begin()返回一个可读写的迭代器
    vector<int>::iterator it = int_v.begin();
    // for(;it!=int_v.end();it++){
    //     cout<<"before:"<<*it<<endl;
    //     *it+=1;
    //     cout<<"after:"<<*it<<endl;
    // }
    for (int i : int_v)
    {
            cout<<"before:"<<i<<endl;
            i+=1;
            cout<<"after:"<<i<<endl;
    }
#endif
#if 0
//使用只读迭代器
//c=const
//cbegin()返回一个指向容器中第一个常量的只读迭代器
    vector<int>::const_iterator it=int_v.cbegin();
    for(;it!=int_v.cend();it++){
        cout<<"before:"<<*it<<endl;
    }
#endif
#if 1
    //使用逆迭代器
    //rbegin()返回一个指向容器中最后一个数据的逆迭代器
    vector<int>::reverse_iterator it=int_v.rbegin();
    for(;it!=int_v.rend();it++){
        cout<<"before:"<<*it<<endl;
        *it+=1;
        cout<<"after:"<<*it<<endl;
    }

#endif
    return 0;
}