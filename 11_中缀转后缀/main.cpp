/* 中缀转后缀 */
#include <bits/stdc++.h>

using namespace std;

string s;
stack<char> a;
map<char,int> P;

int main(){
    P['+']=P['-']=1;
    P['*']=P['/']=2;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i])) cout<<s[i];
        else{
            while(!a.empty()&&P[s[i]]<=P[a.top()])
            {
                cout << a.top();
                a.pop();
            }
            a.push(s[i]);
        }
    }
    while(!a.empty())
    {
        cout << a.top();
        a.pop();
    }
    cout <<endl;
    return 0;
}