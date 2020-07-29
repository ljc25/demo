#include <bits/stdc++.h>

using namespace std;

int n;
int a[10001];
int ans;

void bubble_sort(){
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                ans++;
            }
        }
}

int main(){
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    bubble_sort();
    printf("%d\n",ans);
    return 0;
}