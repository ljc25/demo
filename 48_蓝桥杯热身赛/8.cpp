#include<bits/stdc++.h>

using namespace std;

struct student{
	string name;
	int score;
	bool operator () (const student &c,const student &b) const {
        return c.score < b.score;
    }


}a[10001];

int m;
double sum;
int q,w;

int main(){
	scanf("%d",&m);
	for(int i = 0; i < m; i++){
		scanf("%s %d",&a[i].name,&a[i].score);
		sum+=a[i].score;
	}
	sum/=m;

	sort(a,a+m);
	
	q=lower_bound(a,a+m,sum)-a;
	w = q - 1;

	if(fabs(a[q].score-sum)>fabs(a[w].score-sum)){
		cout<<(int)sum << " "<< a[w].name;
	}else{
		cout<<(int)sum << " "<< a[q].name;
	}
	
}