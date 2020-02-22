/* P1981 中缀表达式 
   注意：本题中只限制运算符有+和 *
   */
#include <bits/stdc++.h>

using namespace std;
char c;  //储存运算符
int a;
int b;
int sum;
int main()
{
    scanf("%d",&a);
    while(scanf("%c",&c)&&c!='\n')
    {
        scanf("%d",&b);
        if(c=='*') a = a*b%10000;
        else{
            sum = (sum+a)%10000;
            a = b;
        }
    }
    cout << sum + a;
    return 0;
}

