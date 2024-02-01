#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    string s = "(1+(2*3)+((8)/4))+1";
    stack<char> st;
    int maxo = 0;
    int cnt = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {

        char str = s[i];
        if (s[i] == '(')
        {
            st.push(str);
        }
        else
        {
            // when you pop then increase size by one and store the value in maxo variable
            char strtop = st.top();
            cout << strtop << endl;
            if (strtop == '(' && str == ')')
            {
                st.pop();
                cnt++;
            }
        }

        if (st.size() == 0)
        {
            maxo = max(maxo, cnt);
            cnt = 0;
        }
    }
    cout << maxo << endl;
}