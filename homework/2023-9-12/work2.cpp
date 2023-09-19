#include <iostream>
using namespace std;
void str_delete(string &str_a, string &str_b)
{
    int i = 0;
    int j = 0;
    char up, low;
    while (i < str_b.length())
    {
        // //判断字符串中每一个字符的大小写数值
        // if (str_b.at(i) >= 97&&str_b.at(i)<=122)
        // {
        //     low = str_b.at(i);
        //     up = low-32;
        //     cout << "low:" << low << "up:" << up << endl;
        // }
        // if (str_b.at(i) >= 65&&str_b.at(i)<=90)
        // {
        //     up = str_b.at(i);
        //     low = up+32;
        //     cout << "low:" << low << "up:" << up << endl;
        // }
        while (j < str_a.length())
        {
            //如果找到相应的大小写，删除并再次判断该索引的字符，因为删除后字符自动往前靠,此时下标不应该下移
            if (str_b.at(i) == str_a.at(j) || str_b.at(i)+32 == str_a.at(j)||str_b.at(i)-32 == str_a.at(j))
            {
                str_a.erase(j, 1);
            }
            //如都不相等，则寻找下一个下标值的字符
            else{
                j++;
            }
        }
        j = 0;
        i++;
    }
     cout<<"after:"<<str_a<<endl;
}
int main()
{
    string stra; // 创建stra变量
    string strb; // 创建strb变量
    while (1)
    {
        cout << "输入字符串a" << endl;
        cin >> stra;
        cout << "输入字符串b" << endl;
        cin >> strb;
        str_delete(stra, strb);
        stra.clear();
        strb.clear();
    }
}