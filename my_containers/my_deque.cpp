#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> de;
    de.push_back(1);
    de.push_back(2);
    de.push_back(3);
    de.push_back(4);
    de.push_back(5);
    de.pop_back();
    de.pop_front();
    while (!de.empty())
    {
        /* code */
        cout<<de.front()<<endl;
        de.pop_front();
    }
    return 0;
}