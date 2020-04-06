/* 单层汉诺塔 */
#include <bits/stdc++.h>

using namespace std;

int ans;  //记录步数
int num;    // 总个数
char a = '1',b='2',c='3';
void Hanoi(int n,char A,char B,char C){
    if(n==0) return;
    else{
        Hanoi(n-1,A,C,B);
        ans++;
        cout << n << " "<< A << " "<< C << endl;
        Hanoi(n-1,B,A,C);
    }
}
int main(){
    cin >> num;

    Hanoi(num,a,b,c);

    cout << ans;
    return 0;
}