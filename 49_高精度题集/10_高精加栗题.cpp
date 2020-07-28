#include <bits/stdc++.h>

using namespace std;

string str;
int b[10];
int c[7] = {0,2,3,5,7,11,13};
int pb=1;

int main(){
    cin >> str;
    int len = str.length(),k=len-1;
    while (k>=0)
    {
        if(isdigit(str[k])){
            if(isdigit(str[k-1])){
                b[pb] += ((str[k-1] - '0') * 10 + (str[k] - '0'));
                k--;
            }else{
                b[pb] += (str[k] - '0');
            }
            pb++;
        }
        if(str[k]=='+') pb = 1;
        k--;
    }

    for(int i = 1;i<=pb;i++){
        if(b[i]>=c[i]){
            b[i+1] += b[i]/c[i];
            b[i] %= c[i];
        }
    }
    //去除前导0
    while(b[pb]==0&&pb>0){pb--;}
    
    for(int i = pb;i>1;i--){
        cout << b[i] << ",";
    }
    cout << b[1];
    return 0;
}