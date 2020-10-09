// 从输入中读取一个数n，求出n！中末尾0的个数
#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    // insert code here...
    int m, i = 0, k;
    long long n, count;
    scanf("%d", &m);
    int *a = (int *)malloc(m * (sizeof(int *)));
    while (m != 0)
    {
        scanf("%lld", &n);
        count = 0;
        while (n != 0)
        {
            n = n / 5;
            count = count + n;
        }
        a[i++] = count;
        m--;
    }
    for (k = 0; k < i; k++)
    {
        printf("%d\n", a[k]);
    };
    return 0;
}