#include <iostream>
#include <cstdio>
#include <cstring>
#include <unistd.h>
#include <map>
#include <locale>
#include <string>
#include <sstream>
using namespace std;
map<string, string> my_map;
string input_data;
void init_data()
{
    FILE *fp = fopen("file", "r");
    char buf[2024];
    string str_buf;
    while (!feof(fp))
    {
        bzero(buf, sizeof(buf));
        str_buf.clear();
        fgets(buf, 2024, fp);
        // 获取键值与对应的汉字
        char *key = strtok(buf, "=>");
        char *value = strtok(NULL, "=>");
        str_buf = value;
        // 去除',','\n',与""
        str_buf.erase(str_buf.find_last_of(","));
        str_buf.erase(0, 1);
        str_buf.erase(str_buf.length() - 1);
        // cout<<str_buf<<endl;
        my_map.insert(pair<string, string>(key, str_buf));
    }
    fclose(fp);
    cout << "初始化完毕" << endl;
    sleep(1);
    system("clear");
}
void showPageData(int i, int char_i, string str_ret, string str_input)
{
    system("clear");
    cout << input_data << endl;
    cout << str_input << endl;
    // 第一页
    // int i = 0;
    // int char_i = 0;
    cout << "1\t"
         << "2\t"
         << "3\t"
         << "4\t"
         << "5\t"
         << "6\t"
         << "7\t"
         << "-\t"
         << "+\t"
         << "0退出\t"
         << endl;
    do
    {
        // 获取下标的单个汉字
        string temp;
        for (int j = char_i * 3; j < (char_i + 1) * 3; j++)
        {
            if ((str_ret[char_i] & 0xC0) == 0x80)
            {
                // 这是一个汉字的后续字节，忽略
                continue;
            }
            // 提取汉字（假设UTF-8编码）
            if ((str_ret[char_i] & 0x80) && (str_ret[char_i] & 0x40))
            {
                temp += str_ret[char_i++];
                temp += str_ret[char_i++];
                temp += str_ret[char_i];
            }
        }
        cout << temp << "\t";
        i++;
        char_i = i * 3;
    } while (i % 7 != 0 && i < str_ret.length());
    cout << endl;
}
void inputStr(int selected, int cur_page, string str_ret)
{
    // cout<<str_ret<<endl;
    int i_temp = ((selected - 48 - 1) + (cur_page - 1) * 7) * 3;
    // cout<<i_temp<<endl;
    string temp;
    for (int j = i_temp; j < (i_temp + 1) * 3; j++)
    {
        if ((str_ret[i_temp] & 0xC0) == 0x80)
        {
            // 这是一个汉字的后续字节，忽略
            continue;
        }
        // 提取汉字（假设UTF-8编码）
        if ((str_ret[i_temp] & 0x80) && (str_ret[i_temp] & 0x40))
        {
            temp += str_ret[i_temp++];
            temp += str_ret[i_temp++];
            temp += str_ret[i_temp];
        }
    }
    // cout<<"temp:"<<temp<<endl;
    input_data.append(temp);
    // cout<<input_data<<endl;
    system("clear");
}
void my_cin()
{
    string str_input;
    // locale::global(locale("")); // 设置多语言
    while (1)
    {
        cout << input_data << endl;
        str_input.clear();
        cin >> str_input;
        // 每次只显示7个
        if (my_map.find(str_input) == my_map.end())
        {
            input_data += str_input;
            system("clear");
            continue;
        }
        string str_ret = my_map.find(str_input)->second;
        char selected;
        //---------------
        //------翻页-----
        int cur_page = 1;                 // 当前页
        int limit = 7;                    // 每页显示数
        int total = str_ret.length() / 3; // 汉字总数
        int max_page = total / 7 + 1;     // 最大页
        int i = 0, char_i = 0;
        // 进入选择汉字
        // 显示第一页
        showPageData(0, 0, str_ret, str_input);
        while (1)
        {
            cin >> selected;
            if (selected >= '1' && selected <= '7')
            {
                inputStr(selected, cur_page, str_ret);
                break;
            }
            else if (selected == '+')
            {
                // 翻页
                if (max_page == 1)
                {
                    cout << "无更多信息,请重新选择" << endl;
                    continue;
                }
                else
                {
                    cur_page++;
                    if (cur_page > max_page)
                    {
                        cur_page = 1;
                        i = 0;
                        char_i = 0;
                    }
                    else
                    {
                        i = (cur_page - 1) * 7;
                        char_i = i * 3;
                    }
                    showPageData(i, char_i, str_ret, str_input);
                }
            }
            else if (selected == '-')
            {
                cur_page--;
                if (cur_page == 0)
                {
                    cur_page = 1;
                    i = 0;
                    char_i = 0;
                }
                else
                {
                    i = (cur_page - 1) * 7;
                    char_i = i * 3;
                }
                showPageData(i, char_i, str_ret, str_input);
            }
            else if (selected == '0')
            {
                system("clear");
                break;
            }
        }
    }
}
int main()
{
    init_data();
    my_cin();
    return 0;
}