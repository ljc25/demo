/* 
    高精
 */
#include <bits/stdc++.h>

using namespace std;

char al[100000],bl[100000];
int a[100000],b[100000],c[1000000];

int main(){
    cin >> al >> bl;
    a[0]=strlen(al),b[0]=strlen(bl);
    for(int i = 1;i<=a[0];i++)
        a[i]=al[a[0]-i]-'0';
    for (int i = 1; i <= b[0]; i++)
        b[i]=bl[b[0]-i]-'0';

    for (int  i = 1; i <=b[0] ; i++)
        for(int j = 1;j<=a[0];j++)
            {
                c[i+j-1]+=b[i]*a[j];
            }
    int len = a[0] + b[0];
    for(int i=1;i<=len;i++)
    {
        if(c[i]>=10){
            c[i+1] += c[i]/10;
            c[i]%=10;
        }
    }
    while (c[len]==0&&len>1)
    {
        len--;
    }
    
    for(int i = len;i>0;i--)
        cout << c[i];
    return 0;
}