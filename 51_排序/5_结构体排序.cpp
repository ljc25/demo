#include <bits/stdc++.h>

using namespace std;

int n;

struct student{
    string username;
    int year;
    int month;
    int day;
    int id;
}students[101];

bool cmp(student& x,student& y){
    if(x.year!=y.year) return x.year < y.year;
    else if(x.month!=y.month) return x.month<y.month;
    else if(x.day!=y.day) return x.day < y.day;
    return x.id > y.id;
}

int main(){
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        // scanf("%s %d %d %d",&students[i].username,&students[i].year,&students[i].month,&students[i].day);
        cin >> students[i].username >> students[i].year >> students[i].month >> students[i].day;
        students[i].id = i;
    }
    sort(students+1,students+1+n,cmp);
    for(int i = 1;i<=n;i++){
        // printf("%s\n",students[i].username);
        cout << students[i].username << endl;
    }
    return 0;
}