#include <iostream>
#include <vector>
using namespace std;
int fibb(int n, vector<int> &dp)
{
    // step 1
    if (n == 1 || n == 0)
    {
        return n;
    }
    // step3
    if (dp[n] != -1)
    {
        return dp[n];
    }
    // step 2
    dp[n] = fibb(n - 1, dp) + fibb(n - 2, dp);
    return dp[n];
}

int tbulation(int n)
{
    int dp[n + 1];
    dp[1] = 1;
    dp[0] = 0;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int spaceoptimize(int n)
{

    int prev1 = 1;
    int prev2 = 0;
    int curr;
    for (int i = 2; i <= n; i++)
    {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    int val = fibb(n, dp);
    cout << val << "  ";
    cout << endl;
    cout << " tablution : ";
    int val2 = tbulation(n);
    cout << val2 << " ";
    cout << endl;
    cout << " space optimize  : ";
    int val3 = spaceoptimize(n);
    cout << val3 << " ";
}