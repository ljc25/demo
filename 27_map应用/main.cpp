/* P1603 斯诺登的密码 */
#include <bits/stdc++.h>

using namespace std;
map<string,int>a;
const int maxn=66;
int top;
int st[maxn];
string s;
int main(){

     a["one"]=1;a["two"]=2;a["three"]=3;a["four"]=4;a["five"]=5;a["six"]=6;a["seven"]=7;a["eight"]=8;a["nine"]=9;a["ten"]=10;
     a["eleven"]=11;a["twelve"]=12;a["thirteen"]=13;a["fourteen"]=14;a["fifteen"]=15;a["sixteen"]=16;a["seventeen"]=17;a["eighteen"]=18;a["nineteen"]=19;a["twenty"]=20;
     a["a"]=1;a["both"]=2;a["another"]=1;a["first"]=1;a["second"]=2;a["third"]=3;
     for(int i=1;i<=6;i++){
        cin>>s;
        if(a[s]){
            int k=a[s]*a[s]%100;
            if(k==0)continue;
            st[++top]=k;
         }
     }
     sort(st+1,st+top+1);
     cout<<st[1];
     for(int i=2;i<=top;i++){
        if(st[i]<10)cout<<0;
        cout<<st[i];
     }
     return 0;

}