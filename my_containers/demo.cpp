#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    #if 0
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    while (!q.empty())
    {
        /* code */
        cout<<q.front()<<endl;
        q.pop();
    }
    #endif

    #if 1
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    while (!s.empty())
    {
        /* code */
        cout<<s.top()<<endl;
        s.pop();
    }
    #endif   
    return 0;
}