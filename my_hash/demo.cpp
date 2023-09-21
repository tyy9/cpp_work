#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> my_map;
    my_map.insert(pair<string,int>("tom",18));
    // my_map.insert(pair<string,int>("tom",19));
    // my_map.insert(pair<string,int>("tom",20));
    my_map.insert(pair<string,int>("jack",18));
    my_map.insert(pair<string,int>("marry",18));
    for(auto m:my_map){
        cout<<"key:"<<m.first<<endl;
        cout<<"value:"<<m.second<<endl;
    }
    return 0;
}