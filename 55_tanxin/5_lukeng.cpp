/* P2242 公路维修问题 */
#include <bits/stdc++.h>

using namespace std;

int n,m;
int a[15005],b[15005],ans;

bool cmp(int k,int h){
	return k>h;
}

int main(){
   scanf("%d%d",&n,&m);
   for(int i=1;i<=n;i++)
       scanf("%d",&a[i]);
   ans = a[n] - a[1] + 1;
   for(int i=1;i<n;i++)
       b[i] = a[i+1] - a[i];
   sort(b+1,b+n,cmp);
   for(int i=1;i<m;i++){
       ans = ans - b[i] + 1;
   }
   printf("%d\n",ans);
	
   return 0;
}