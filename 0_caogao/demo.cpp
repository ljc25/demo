#include <stdio.h>
#include <stdlib.h>


int partition(int *a, int left, int right)
{
    int x = a[left];
    while (left < right)
    {
        while (a[right] >= x && right > left)
            right--;
        a[left] = a[right];
        while (a[left] <= x && left < right)
            left++;
        a[right] = a[left];
    }
    a[left] = x;
    return left;
}
int find(int *a, int left, int right, int k)
{
    int temp = partition(a, left, right);
    if( k - 1 == temp)
        printf("%d", a[k - 1]);
    else if (k - 1 < temp)
    {
        find(a, left, temp - 1, k);
    }
    else if(k - 1 > temp )
    {
        find(a, temp + 1, right, k);
    }
    return 0;
}
int main(int argc, const char *argv[])
{
    // insert code here...
    int n, k;
    scanf("%d %d", &n, &k);
    int *a = (int *)malloc(n * (sizeof(int *)));
    int i, f;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    };
    find(a, 0, n - 1, k);
    return 0;
}