#include <bits/stdc++.h>

using namespace std;

int n,m,temp,flag;
int a[1000];

void bianry_search(int left,int right){
    int mid = (left+right)/2;
    if(temp == a[mid]){
        if(!flag){
            flag = 1;
            cout << mid;
        }
        else
            cout << " " << mid;
    }
    else if(temp<a[mid])
        bianry_search(left,mid-1);
    else
        bianry_search(mid+1,right);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i <n; i++)
        cin >> a[i];
    while (m--)
    {
        cin >> temp;
        bianry_search(0,n-1);
    }
    return 0;
}