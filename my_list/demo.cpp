#include <iostream>
#include <list>
using namespace std;
template <typename T>
class Test
{
private:
    /* data */
public:
    Test(/* args */)
    {
    }
    ~Test()
    {
    }
    bool operator()(const T &n)
    {
        if (n % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// 谓词函数
template <typename T>
bool del(const T &n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
#if 0
    list<int> int_list;
    int arr[5]={14,56,89,23,54};
    int_list.assign(arr,arr+5);
    Test<int> t;    
    int_list.remove_if(t);
    for(int i:int_list){
        cout<<i<<endl;
    }
#endif
#if 0
    list<char> char_list;  
    char s[]="hello";
    char_list.assign(s,s+sizeof(s));
    Test<char> t;
    char_list.remove_if(t);
    for(char c:char_list){
        cout<<c<<endl;
    }
#endif
#if 1
    list<char> char_list;  
    char s[]="hello";
    char_list.assign(s,s+sizeof(s));
    char_list.remove_if(del<char>);
    for(char c:char_list){
        cout<<c<<endl;
    }
#endif
}
