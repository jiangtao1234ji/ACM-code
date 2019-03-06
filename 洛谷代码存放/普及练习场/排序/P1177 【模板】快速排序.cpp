#include <iostream>
#include <algorithm>
#include <string>
#define maxn 100005

using namespace std;

void swap(int arr[], int i, int j)
{
    int temp;

    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void QuickSort(int arr[], int left, int right)
{
    int i, pivot;

    if (left >= right)
        return;
    pivot = left;
    swap(arr, left, (left + right) / 2);
    for (i = left + 1; i <= right; i++)
        if (arr[i] < arr[left])
            swap(arr, i, ++pivot);
    swap(arr, left, pivot);
    QuickSort(arr, left, pivot - 1);
    QuickSort(arr, pivot + 1, right);
}

int a[maxn];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    for (int i = 0; i < n; i++)
        cout << a[i]<<" ";
    cout << endl;
    return 0;
}