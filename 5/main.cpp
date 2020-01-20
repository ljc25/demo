/*P1098 字符串的展开   
        这个题解的三目运算 女少 口阿 ！女少 口阿！*/
#include <bits/stdc++.h>

using namespace std;

int p1,p2,p3;
string  sentence;   //储存字符串
int i = 0;
char afront,behind,f,p,j;//

int main()
{
    cin >>p1 >>p2 >> p3 >>sentence;
    while(sentence[i])
    {
        afront = sentence[i-1],f = sentence[i],behind = sentence[i+1];
        if(f == '-'&&afront<behind&&(afront>='0'&&behind<='9'||afront>='a'&&behind<='z'))
        {
            for(p3 == 1?j=afront+1:j=behind-1;p3==1?j<behind:j>afront;p3==1?j++:j--)
            {
                p = j;
                if(p1==2)
                p=(p>='a')?p-32:p;
                else if(p1==3)
                p = '*';
                for(int i = 0;i<p2;i++)
                cout << p ;
            }
        }
        else
        cout << f;
        i++;
    }
    return 0;
}


