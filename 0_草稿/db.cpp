#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("d://data.txt" ,"w" ,stdout);
    for(int i = 1; i <= 50; i++)
    {
        int sum = 1;
        for(int j = 1 ; j <= i; j++)
        {
            sum *= i;
            if(sum > 100)
            sum %= 100;
        }
        printf("%d" ,sum%10);
    }
    return 0;
}