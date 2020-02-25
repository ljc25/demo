/* P1012 拼数 
设有nn个正整数(n≤20)(n≤20)，将它们联接成一排，组成一个最大的多位整数。
例如：n=3n=3时，33个整数1313,312312,343343联接成的最大整数为：3433121334331213
又如：n=4n=4时，44个整数77,1313,44,246246联接成的最大整数为：74246137424613
*/
#include<bits/stdc++.h>

using namespace std;
string s[25];//不多说 
int n;//限制数字个数 

bool cmp(string a,string b) {
    return a+b>b+a;//自定义排序函数，这一步非常巧妙，假设a=1200，b=34；a+b=120034，b+a=341200这样下面sort排下来就是32>321避免出现32132>32321的情况 
}
/* 如果这样写：
bool cmp(string a,string b){
    return a>b;
    会发生321>32的情况，具体原因是字符串自己的关系运算是这样设定的
    预期答案是32321，但单纯的字符串比较会得出的答案是32132 
} */
int main() {
    cin>>n;
    for(int i=1; i<=n; i++) cin>>s[i];
    sort(s+1,s+n+1,cmp);//神来之笔 
    for(int i=1; i<=n; i++) cout<<s[i];//完美收场（yo）！ 
    return 0;
}