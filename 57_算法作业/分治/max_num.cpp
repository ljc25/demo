#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int m;       // m个数
int a[31];
int maxnum;

// 返回两个数的较大值
int max(int x, int y){
    return x>y?x:y;
}
// 使用递归返回数组a的最大元素值。 终止条件：n==2 递归步骤：arraymax=max(max(a[0],...,a[n-2]), a[n-1])
int arraymax(int* a, int n){
    if(n==m){
        // 第一项和第二项先运算，获取到maxnum后方便后面递归调用maxnum
        maxnum = max(a[0], a[1]);
        cout << "max(" << a[0] << "," << a[1] << ")=" << maxnum << " ";
    }
    if(n==2){
        // 终止条件
        cout << maxnum;
        return 0;
    }
    // 前面获取的最大值与数组后面的每一项进行比较
    cout << "max(" << maxnum << "," << a[m - n + 2] << ")=" << max(maxnum, a[m - n + 2]) << " ";
    maxnum = max(maxnum, a[m - n + 2]);
    arraymax(a,n-1);
    return maxnum;
}

int main()
{
    scanf("%d",&m);
    for (int i = 0; i < m; i++)
        scanf("%d",&a[i]);
    arraymax(a,m);
    return 0;
}