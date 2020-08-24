/* P1589 泥泞路 */
#include<bits/stdc++.h>

using namespace std;
int ans;
struct AC{
    int a,b;
}f[10005];
int maxn(int a,int b){
    return a>b ?a:b;
}
bool cmp(const AC&x,const AC&y){
    return x.a<y.a;
}
int main(){
    int n,l;
    scanf("%d%d",&n,&l);
    for(int i=0;i<n;i++)
        scanf("%d%d",&f[i].a,&f[i].b);
    sort(f,f+n,cmp);
    int j=f[0].a;
    for(int i=0;i<n;i++){
        while(j<f[i].b){
            j+=l;
            ans++;
        }
        j=maxn(j,f[i+1].a);
    }
    printf("%d\n",ans);
    return 0;
}