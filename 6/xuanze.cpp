#include <bits/stdc++.h>

using namespace std;

void selectsort(int A[], int size)
{
    for(int i=0; i<size-1; ++i) // 比较n-1轮
    {
        int min = i; // 预先设置一个最小值
        for(int j=i+1; j<size; ++j) // 每轮比较n-i+1次
            if(A[j]<A[min]) min = j;
        if(min != i)
            swap(A[i],A[min]);// 把最小值放到第i位

        for(int k=0; k<size; k++)
            cout<<A[k]<<",";
        cout<<endl;
    }
}