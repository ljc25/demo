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

bool isHw(int num) {

    int temp=num,ans=0;
    while (temp!=0) {
        ans=ans*10+temp%10;
        temp/=10;
    }
    if (ans==num)
        return true;
    else
        return false;
}

int main(){
    scanf("%d %d",&a,&b);
    a = a%2==0?a+1:a;
    b = b>=10000000?9999999:b;
    for(int i = a;i<=b;i+=2){
        if(isHw(i)&&isPrime(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}