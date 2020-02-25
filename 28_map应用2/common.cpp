/* P1071 潜伏者 */
#include <bits/stdc++.h>

using namespace std;

string x, y, z;      // 储存输入的3个字符串
bool fr[27], ba[27]; // 默认为0表示未使用过
char c[27];          // 密码本
int s;               // 储存所有字母是否都被存进来

int main()
{
    cin >> x >> y >> z;
    for (int i = 0; i < x.size(); i++)
    {
        if (!fr[x[i] - 'A' + 1] && !ba[y[i] - 'A' + 1])
        {
            c[x[i] - 'A' + 1] = y[i];
            fr[x[i] - 'A' + 1] = ba[y[i] - 'A' + 1] = true;
            s++;
        }
        else if (c[x[i] - 'A' + 1] != y[i])
        {
            cout << "Failed";
            return 0;
        }
    }
    if (s < 26)
    {
        cout << "Failed";
        return 0;
    }
    for (int i = 0; i < z.size(); ++i) //输出
    {
        printf("%c", c[z[i] - 'A' + 1]);
    }
    return 0;
}