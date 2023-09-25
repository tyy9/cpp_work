#include<iostream>
#include<vector>
using namespace std;
int main(){
    char m_c[]="hello";
    vector<char> my_v(m_c,m_c+5);
    for(char &c:my_v){
        cout<<"before:"<<c<<endl;
        c++;
        cout<<"after:"<<c<<endl;
    }
    for(auto c:my_v){
        cout<<c<<endl;
    }
    return 0;
}