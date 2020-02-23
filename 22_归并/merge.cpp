/* 归并排序 */
#include <bits/stdc++.h>

using namespace std;

int temp[1000000]; // 临时数组

void merge_sort(int arr[],int left,int mid,int right)
{
    memset(temp,0,sizeof(int));
    int k = 0;
    int i = left,j = mid;
    while(i<mid&& j<=right)
    {
        if(arr[i]<=arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }
    //注意这一句和下面一句一次只合并会有其中一个执行
    //把剩下的没放完的一边也扔进b里面
    while(j<=right) temp[k++]=arr[j++];
    while(i<mid) temp[k++]=arr[i++];
    for(int i = left;i<=right;i++)
    arr[i] = temp[i-left];
}

void sort(int arr[],int start,int end)
{
    if(start == end) return; // 拆到最小不能再拆
    int mid = (start + end) / 2;
    sort(arr,start,mid); //拆左边
    sort(arr,mid+1,end); //拆右边
    merge_sort(arr,start,mid+1,end); //合并
}

int main()
{
    int arr[] = {9,2,4,1,5,6,3,7};
    int n = 8;
    sort(arr,1,n);
}