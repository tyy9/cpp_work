#include<iostream>
#include<set>
using namespace std;
int main(){
    set<string>my_set;
    my_set.insert("bbbbb");
    my_set.insert("aaaaa");
    for(string s:my_set){
        s+="hello";
        cout<<s<<endl;
    }
    return 0;
}