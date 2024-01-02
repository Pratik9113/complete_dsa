#include <iostream>
using namespace std;
double positive(double x, int n)
{
    if (n == 0)
    {
        return 1.0;
    }
    return x * positive(x, n - 1);
}
double negative(double x, int n)
{
    if (n == 0)
    {
        return 1.0;
    }
    return x * negative(x, n + 1);
}
int main()
{
    double x = 2.0;
    int n = -2;
    if (n > 0)
    {
        double ans = positive(x, n);
        cout << ans;
    }
    if (n < 0)
    {
        double ans = negative(x, n);
        cout << (1 / ans);
    }
}