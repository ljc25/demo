// 将一个给定的真分数化简为最简分数形式。
#include <bits/stdc++.h>

using namespace std;

int m,n;

int gcd(int x,int y){
    if(x%y==0){
        return y;
    }
    return gcd(y,x%y);
}

int main(){
    cin >> m >> n;
    int ans = gcd(m,n);
    m /= ans;
    n /= ans;
    cout << m << '/' << n;
    return 0;
}