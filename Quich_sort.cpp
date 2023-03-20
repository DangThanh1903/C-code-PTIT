#include <bits/stdc++.h>
using namespace std;

int x, n, a[1000], b[1000];

void QuickSort(int a[], int left, int right)
{
    int i, j, x;
    x = a[(left + right) / 2];
    i = left;
    j = right;
    do
    {
        while (a[i] < x)
            i++;
        while (a[j] > x)
            j--;
        if (i < j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    } while (i <= j)
    {
        if (left < j)
            QuickSort(a, left, i);
        if (i > right)
            QuickSort(a, j, right);
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    QuickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}