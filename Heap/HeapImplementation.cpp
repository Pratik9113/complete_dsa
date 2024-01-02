#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[index] > arr[parent])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deletion()
    {
        if (size == 0)
        {
            cout << "arr is empty" << endl;
        }

        int index = 1;
        arr[index] = arr[size--];
        while (index < size)
        {
            int left = 2 * index;
            int right = 2 * index + 1;
            if (left < size && arr[left] > arr[index])
            {
                swap(arr[left], arr[index]);
                index = left;
            }
            else if (right < size && arr[right] > arr[index])
            {
                swap(arr[right], arr[index]);
                index = right;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void sortheapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        sortheapify(arr, n, largest);
    }
}
void sort_heap(int arr[], int n)
{
    int t = n;
    while (t > 1)
    {
        swap(arr[1], arr[t]);
        t--;
        sortheapify(arr, t, 1);
    }
}
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(54);
    h.insert(52);
    h.print();
    cout << endl;
    h.deletion();
    h.print();
    cout << endl;
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        sortheapify(arr, n, i);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // heap sort
    sort_heap(arr, n);
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    // stl
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout << endl;

    // min heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);
}