#include <iostream>
using namespace std;
int main()
{
    int nums[] = {2, 0, 2, 1, 1, 0};
    int n = 6;
    int low = 0;
    int mid = 0;
    int high = n - 1;
    int i = 0;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low++], nums[mid++]);
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high--]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}