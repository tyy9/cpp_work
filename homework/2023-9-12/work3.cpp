#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Mystring
{
private:
    /* data */
public:
    void Mystring_trans(string &str);
    void Mystring_reverse(string &str);
    void Mystring_saveMystring(string &str);
};

void Mystring::Mystring_trans(string &str)
{
    int i = 0;
    char up, low;
    while (i < str.length())
    {
        // 判断字符串中每一个字符的大小写数值
        if (str.at(i) >= 97 && str.at(i) <= 122)
        {
            low = str.at(i);
            up = low - 32;
            // cout << "low:" << low << "up:" << up << endl;
            str.replace(i, 1, 1, up);
            i++;
            // continue;
        }
        else
        {
            i++;
        }
    }
    cout << "小写转大写:" << str << endl;
}
void Mystring::Mystring_reverse(string &str)
{
    reverse(str.begin(), str.end());
    cout << "reserve:" << str << endl;
}
void Mystring::Mystring_saveMystring(string &str)
{
    int i = 0;
    while (i < str.length())
    {
        //cout<<"i:"<<i<<str.at(i)<<endl;
        //如果找到相应的其他数据，删除并再次判断该下标的字符，因为删除后字符自动往前靠,此时下标不应该下移
        if (str.at(i) < 65)
        {
            str.erase(i, 1);
        }
        else if (str.at(i) > 90 && str.at(i) < 97)
        {
            str.erase(i, 1);
        }
        else if (str.at(i) > 122)
        {
            str.erase(i, 1);
        }else{
            i++;
        }
    }
    cout << "save_Mystring:" << str << endl;
}
int main()
{
    string str; // 创建str变量
    Mystring *w = new Mystring;
    while (1)
    {
        cout << "输入字符串" << endl;
        cin >> str;
        w->Mystring_trans(str);
        w->Mystring_reverse(str);
        w->Mystring_saveMystring(str);
        str.clear();
    }
    delete w;
    return 0;
}
