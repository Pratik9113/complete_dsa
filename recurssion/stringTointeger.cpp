#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "-42";
    string str = "";
    int sum = 0;
    int n = str.length();
    bool ans = false;
    for (int i = 0; i < s.length(); i++)
    {
        int asciiValue = s[i] - '0';
        if (s[i] == '-' && ans == false)
        {
            if (str.length() == 0)
            {
                ans = true;
            }
        }
        else if (asciiValue >= 0 && asciiValue <= 9)
        {
            str+= s[i];
            sum = sum * 10 + asciiValue;
        }
        else
        {
            break;
        }
    }
    if (ans == true)
    {
        sum = -sum;
    }
    cout << sum;
}