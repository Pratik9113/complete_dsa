#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {4, 2, -3, 1, 6};
    bool ans = false;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    for (auto it : s)
    {
        cout << it << " ";
    }
}