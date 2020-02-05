/* P1981 中缀表达式 
   注意：本题中只限制运算符有+和 *
   */
#include <iostream>
#include <stack>
using namespace std;
stack <int> x;//一个存数字并在最后把它们相加的栈
int main()
{
    int a,b;
    char c;
    cin>>a;//先输入一个数，以后符号+数字输入
    int m=10000;
    a=a%m;//必须的操作
    x.push(a);//压入栈中
    while(cin>>c>>b)
    {
        if(c=='*')//将*之前的数字与*之后的数字积存入
        {
            a=x.top();
            x.pop();
            x.push(a*b%m);
        }
        else//将b存入
            x.push(b);
    }
    a=0;
    while(x.size())
    {
        a+=x.top();
        a%=m;//取模是万恶之源
        x.pop();
    }
    cout<<a<<endl;
    return 0;
}