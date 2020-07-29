#include <bits/stdc++.h>

using namespace std;

int n;
int a[1000001];

void quick_sort(int x,int y){
	int left = x, right = y,pivot = (left+right)/2,temp = a[pivot];
	while(left<=right){
		while(a[left]<temp) left++;
		while(a[right]>temp) right--;
		if(left<=right) {
			swap(a[left],a[right]);
			left++;
			right--;
		}
	}
	if(x<right) quick_sort(x,right);
	if(left<y)  quick_sort(left,y);
	
}
                    
int main(){
    scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	quick_sort(1,n);
	for(int i = 1;i<=n;i++){
		printf("%d ",a[i]);
	}
    return 0;
}