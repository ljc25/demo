#include <bits/stdc++.h>

using namespace std;

int n,a,b,q,p=1;

struct fensu{
    int up;
    int down;
}fs[50000001];

void changea(int m){
    a = (a * m + b);
}

int findq(){
    int i = p;
    while(i<=n){
        if(fs[i].down!=1)
        {
            p = i;
            return fs[i].down;
        }
            
        else
            i++;
    }
    return -1;
}

int main(){
    cin >> n >> a >> b;
    for(int i = 1;i<=n;i++){
        fs[i].up = 1;
        fs[i].down = i;
    }
    while(1){
        q = findq();
        if(q==-1)
            break;
        for(int i = p;i<=n;i++){
            fs[i].up *= q;
            if(fs[i].down!=1 && (fs[i].up % fs[i].down==0)){
                fs[i].up /= fs[i].down;
                fs[i].down = 1;
            }else if(fs[i].down!=1 && (fs[i].down % fs[i].up==0)){
                fs[i].down /= fs[i].up;
                fs[i].up = 1;
            }
        }
        changea(q);
    }
    cout << a;
    return 0;
}