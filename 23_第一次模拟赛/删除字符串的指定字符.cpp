#include <bits/stdc++.h>

using namespace std;

string a,b;

int main()
{
    getline(cin,a);    //原字符串
    getline(cin,b);    //需要被删除的一些字符
    string::iterator it;
    for(int i = 0;i<b.length();i++)
    {
    for (it = a.begin(); it < a.end(); it++)
    {
         if (*it == b[i])
        {
            a.erase(it);
            it--;  /* 因为删除以后it迭代器指向的字符被删除后会自动前移，所以此处
                      需要it--,以免for循环中的it++跳过某个字符串*/
        }
    }
    }
    for(int i = 0;i<a.size();i++)
        cout << a[i];
    return 0;
}