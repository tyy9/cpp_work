#include <iostream>
#include <string>
using namespace std;
void judge(string &str)
{
    if (str.find("http://www.") == 0 || str.find("https://www.") == 0 || str.find("www.") == 0)
    {
        // 判断是否有.com的存在可能
        if (str.find_first_of('.') != str.find_last_of('.'))
        {
            // 判断是否只有两个'.'
            if (str.find('.', str.find_first_of('.') + 1) == str.find_last_of('.'))
            {
                // 判断最后一个'.'后面的字符串是否为"com"且索引之差为1
                size_t last_index = str.find_last_of('.');
                // cout << last_index << endl;
                if (str.find("com", last_index) - last_index == 1)
                {
                    cout << "格式正确" << endl;
                }
                else
                {
                    cout << "格式错误" << endl;
                }
            }
            else{
                cout << "格式错误" << endl;
            }
        }
        else
        {
            cout << "格式错误" << endl;
        }
    }
    else
    {
        cout << "格式错误" << endl;
    }
}
int main()
{
    string str; // 创建str变量
    while (1)
    {
        cout << "输入字符串" << endl;
        cin >> str;
        judge(str);
        str.clear();
    }

    return 0;
}