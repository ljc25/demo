/* P1217 [USACO1.5]回文质数 Prime Palindromes
   注释 : 最后一个测试点超时 ， 考虑原因应该是 reverse函数耗时过长
*/
#include <bits/stdc++.h>

using namespace std;

int a,b;

string str1,str2;

bool isPrime(int x){
    for(int i = 2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}

int main(){
    scanf("%d %d",&a,&b);
    a = a%2==0?a+1:a;
    for(int i = a;i<=b;i+=2){
        if(i==9989900) //如果到了这个数，就break 
			break;
        str1 = to_string(i);
        str2 = str1;
        reverse(str1.begin(),str1.end());
        if(str1 == str2){
            if(isPrime(i)){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}