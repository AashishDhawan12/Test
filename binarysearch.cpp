#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int num)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == num)
        {
            return mid;
            break;
        }

        if (num < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 8;

    int ans = binary_search(arr, n, num);
    cout << ans;
}