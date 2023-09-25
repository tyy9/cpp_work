#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {10, 34, 23, 55, 21, 34};
    vector<int> v(a, a + 6);
    auto it = find(v.begin(), v.end(), 34);
    cout << *it << endl;
    while (it != v.end())
    {
        it = find(++it, v.end(), 34);
        if (it != v.end())
        {
            cout << *it << endl;
        }
    }
    return 0;
}