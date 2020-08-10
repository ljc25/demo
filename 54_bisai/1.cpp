#include <bits/stdc++.h>

using namespace std;

long long a,b,num,temp,sizea=1;

int main(){
    cin >> a >> b;
    long long x = a;
    while(x/10!=0){
        sizea ++;
        x/=10;
    }
    sizea = pow(10,sizea);
    for(int i = 100;i<1000;i++){
        temp  = a + i * sizea;
        if(temp % b == 0)
            num++;
    }
    cout << num;
    return 0;
}