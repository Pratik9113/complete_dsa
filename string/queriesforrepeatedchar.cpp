#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string x = "Mr John Smith";
    int n = 13;
    string rep = "%20";
    for (int i = 0; i < n; i++)
    {
        if (x[i] == ' ')
        {
            x.replace(i, 1, rep);
        }
    }
    cout << x << endl;
    cout << x.size() << endl;
}
