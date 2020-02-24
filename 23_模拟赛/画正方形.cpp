#include <bits/stdc++.h>

using namespace std;

int n;
char a;
int m;
int main()
{
    cin >> n >> a;
    m = round(n/2);
    for (int i = 0; i < m; i++)
    {
        for (int i = 0; i < n; i++)
            cout << a;
        cout << endl;
    }
}

#include<stdio.h>
int main()
{
    int n,i,j;
    char a;
    scanf("%d ",&n);
    scanf("%c",&a);
    if(n%2==0)  //当n为偶数时
    for(i=1;i<=n/2;i++)   //n/2行
    {
        for(j=1;j<=n;j++)    //每行n个
        {
            printf("%c",a);
        }
        printf("\n");
    }
    if(n%2!=0)    //当n为奇数时
    for(i=1;i<=(n+1)/2;i++)    //(n+1)/2行
    {
        for(j=1;j<=n;j++)   //每行n个
        {
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}