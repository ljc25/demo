#include <bits/stdc++.h>

using namespace std;

int prime[100];
bool isprime[100];

int sieve(int n){
    int p = 0;
    memset(isprime,true,sizeof(isprime));
    isprime[0] = isprime[1] = false;
    int temp = sqrt(n);
    for(int i = 2;i<=temp;i++){
        if(isprime[i]){
            prime[++p] = i;
            for(int j = i*i;j<=n;j+=2*i){
                isprime[j] = false;
            }
        }
    }
    return p;
}

int main(){
    
    return 0;
}