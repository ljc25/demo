#include<bits/stdc++.h>
using namespace std;

map<char,char>m0,m1;  //m0记录密文对明文，m1记录明文对密文
char miwen[10000],mingwen[10000],target[10000];

int main()
{
    gets(miwen);//输入密文
    gets(mingwen);//输入明文
    gets(target);//输入要翻译的信息

    //第一个for循环用来记录明文和密文的对应关系
    for(int i=0;i<strlen(miwen);i++)
    {
        //判断密文多对一，或明文多对一的情况，如果符合这种情况，说明和规则不符，直接输出Failed
        if((m0.count(miwen[i]) && m0[miwen[i]]!=mingwen[i]) || (m1.count(mingwen[i]) && m1[mingwen[i]]!=miwen[i]))
        {
            cout<<"Failed";
            return 0;
        }

        //如果符合规则，则记录
        else
        {
            m0[miwen[i]]=mingwen[i];
            m1[mingwen[i]]=miwen[i];
        }
    }

    //第二个for循环用来判断是否符合第一条规则，即A~Z全部有对应的密文
    char temp='A';
    for(int i=0;i<26;i++)
    {
        //判断是否A~Z都有密文，如果发现没有密文的，说明和规则不符，直接输出Failed
        if(!m1.count(temp+i))
        {
            cout<<"Failed";
            return 0;
        }
    }

    //如果运行到了这里，说明所有规则都符合。直接第三个for循环输出结果
    for(int i=0;i<strlen(target);i++)
    {
            cout<<m0[target[i]];
    }
    return 0;
}