#include <bits/stdc++.h>

using namespace std;

int a[100];
int n =100;
int main()
{
    for(int i =0;i<n;i++)
        for(int j=0;j<n-i;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
    return 0;
}