#include <bits/stdc++.h>

using namespace std;

int a[20190325];

int main(){
    int n = 20190324;
    a[0] = a[1] = a[2] = 1;
    for (int i = 3; i < 20190324;i++){
        a[i] = (a[i-1] + a[i-2] + a[i-3])%10000;
    }
    cout << a[20190323]; 
    return 0;
}
