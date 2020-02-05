/* P1739  括号匹配 */
#include <bits/stdc++.h>
using namespace std;

char str[256];
stack<char> p;

int main()
{
    gets(str);
    for (int i = 0; str[i] != '@'; i++)
    {
        if (str[i] == '(')
            p.push(str[i]);
        if (str[i] == ')' && (!p.empty()))
        {
            p.pop();
            continue;
        }

        if (str[i] == ')' && p.empty())
        {
            cout << "NO";
            return 0;
        }
    }
    if (p.empty())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}