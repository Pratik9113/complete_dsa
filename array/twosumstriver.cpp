#include <iostream>
#include <climits>
#include <math.h>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int arr[4] = {2, 7, 11, 15};
    int n = 4;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]] = i;
    }
}