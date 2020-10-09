/* 
    P6832 [Cnoi2020]子弦
    Cirno 有一个字符串 \texttt{S}S，并希望你能求出 \texttt{S}S 
    出现次数最多的非空子串的出现次数，记作 pp。 
*/
#include <bits/stdc++.h>

using namespace std;

string str;
int a[30];
int ans;

int main()
{
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        a[str[i]-'a']++;
    }
    for(int i = 0;i<26;i++){
        ans = max(ans,a[i]);
    }
    cout << ans;
    return 0;
}