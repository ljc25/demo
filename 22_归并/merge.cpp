/* 归并排序 */
#include <bits/stdc++.h>

using namespace std;

int temp[1000]; // 临时数组

void merge_sort(int a[], int left, int mid, int right)
{
    memset(temp,0,sizeof(int));
    int td = 0;
    int x = left, y = mid + 1;
    while (x <= mid && y <=right)
    {
        if (a[x] < a[y])
            temp[td++] = a[x++];
        else
            temp[td++] = a[y++];
    }
    while (x <= mid)
        temp[td++] = a[x++];
    while (y <= right)
        temp[td++] = a[y++];
    for (int i = left; i <= right; i++)
        a[i] = temp[i-left];
}

void merge(int a[], int left, int right)
{
    if (left == right) return;
    int mid = (left + right) / 2;
    merge(a, left, mid);
    merge(a, mid + 1, right);
    merge_sort(a, left, mid, right);
}

int main()
{
    int a[7] = {1, 5, 2, 3, 7, 4, 1};
    merge(a, 0, 6);
    for (int i = 0; i < 7; i++)
        cout << a[i] << " ";
    return 0;
}