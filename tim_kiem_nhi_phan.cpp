#include <bits/stdc++.h>
using namespace std;

// Hàm tìm kiếm nhi phân
int binarySearch(int arr[], int left, int right, int x)
{
    int middle;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (arr[middle] == x)
            return middle;
        if (x > arr[middle])
            left = middle + 1;
        else
            right = middle - 1;
    }
    return -1;
}
int main()
{
    int x, test, n, arr[1000];
    cin >> test;
    while (test--)
    {
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int result = binarySearch(arr, 0, n - 1, x);
        if (result == -1)
            cout << "NO" << endl;
        else
            cout << result + 1 << endl;
    }
    return 0;
}