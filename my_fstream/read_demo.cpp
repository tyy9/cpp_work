#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    char buf[1024];
    bzero(buf, sizeof(buf));
#if 0
    
    //创建对象
    ifstream fin;
    fin.open("1.txt");
    fin.read(buf,1024);
    cout<<buf<<endl;
    fin.close();
#endif
#if 1
    ifstream fin;
    fin.open("1.txt");
    if(fin.is_open()==-1){
        cout<<"打开文件失败"<<endl;
    }
    while (!fin.eof())
    {
        fin.getline(buf,1024,',');
        cout<<buf<<endl;
        bzero(buf,sizeof(buf));
        /* code */
    }
    fin.close();
    
#endif
        return 0;
}