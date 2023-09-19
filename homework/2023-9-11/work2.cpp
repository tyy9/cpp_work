#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void removeDuplicateChar(string &str){
    string str_new;
    int i=0;
    cout<<"old:"<<str<<endl;
    while (i<str.length())
    {
        /* code */
        //先判断字符串中每一个字符的首次出现索引与最后出现的索引是否相等
        if(str.find_first_of(str.at(i))==str.find_last_of(str.at(i))){
            str_new=str_new+str.at(i);
        }else{
            //如果不是则将首次出现的字符append
            if(str.find_first_of(str.at(i))==i){
                 str_new=str_new+str.at(i);
            }
        }
        i++;
    }
    cout<<"new:"<<str_new<<endl;
}
int main(){
    string str;//创建str变量
    cout<<"输入字符串"<<endl;
    cin>>str;
    removeDuplicateChar(str);
    return 0;
}