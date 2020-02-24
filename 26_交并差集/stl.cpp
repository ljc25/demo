#include <bits/stdc++.h>
using namespace std;
const int maxn = 123;
int n;
int num[maxn];
int main(){
    set<int> a, b;
    vector<int> c;
    a = {2,4,6};
    b = {1,2,3,4,5};
    //传入的a，b不一定是set， 但一定要有序,将并集存入c中
    set_union(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));//并集
    for(int n : c) cout << n << " "; puts("");
    c.clear();

    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));//交集
    for(int n : c) cout << n << " "; puts("");
    c.clear();

    set_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c)); //差集(b中属于a的元素去掉)
    for(int n : c) cout << n << " "; puts("");
    c.clear();
}

