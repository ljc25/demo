#include <bits/stdc++.h>

using namespace std;

int a,b,len1,len2;
string str1,str2;

int main()
{
    int p = 10;
    while(p--){
        for(int i = 1;i<=16;i++){
            cin >> a >> b;
            bitset<8> n(a);
            str1 = n.to_string();
            len1 = n.size();
            for(int i = 0;i<len1;i++){
                if(str1[i]=='1'){
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }
            bitset<8> m(b);
            str2 = m.to_string();
            len2 = m.size();
            for (int i = 0; i < len2; i++)
            {
                if (str2[i] == '1')
                {
                    cout << '*';
                }else{
                    cout << ' ';
                }
            }
            cout << endl;
        }
    }

    return 0;
}