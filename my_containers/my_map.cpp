#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,string> my_map;
    my_map.insert(pair<string,string>("tom","male"));
    my_map.insert(pair<string,string>("tom1","male"));
    my_map.insert(pair<string,string>("tom2","male"));
    my_map.insert(pair<string,string>("tom3","male"));
    int count=my_map.count("tom");
    cout<<count<<endl;
    return 0;
}