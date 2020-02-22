/* P1449 后缀表达式 */ 
#include <bits/stdc++.h>

using namespace std;
stack<int>skt;  
char a[10001];
int sum,k;

int main()
{
    gets(a);
    for(int i =0;a[i]!='@';i++)
    {
        if(a[i]=='.')
        {
            sum = 0,k=1;
            for(int j=i-1;j>=0&&a[j]>='0'&&a[j]<='9';j--)
            {
                sum = sum + (a[j]-'0')*k;
                k*=10;
            }
            skt.push(sum);
            continue;
        }
        if(a[i]>='0'&&a[i]<='9') continue;
        sum = skt.top();
        skt.pop();
        if(a[i]=='+') sum = skt.top()+sum;
        if(a[i]=='-') sum = skt.top()-sum;
        if(a[i]=='*') sum = skt.top()*sum;
        if(a[i]=='/') sum = skt.top()/sum;
        skt.pop();
        skt.push(sum);
    }
    cout << skt.top();
    return 0;
}