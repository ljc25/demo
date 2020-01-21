/* 快排  */

#include <bits/stdc++.h>

using namespace std;

int n; // n个整数
int a[10001];

void quicksort(int left,int right)
{
    int temp,i,j,t;
    if(left>right) return;
    temp = a[left];
    i = left;
    j = right;
    while(i!=j)
    {
        while(j>i&&a[j]>=temp)
        j--;
        while(j>i&&a[i]<=temp)
        i++;

        if(i<j)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    a[left]=a[j];
    a[j]=temp;

    quicksort(left,i-1);
    quicksort(i+1,right);
}

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >>a[i];

    quicksort(1,n);
    
    for(int i=1;i<=n;i++)
        cout << a[i] << " ";  
    return 0;
}

