#include <bits/stdc++.h>

using namespace std;

int prime[100];       // 素数数组
bool isprime[100];    // 判断isprime[i]是否是素数

int sieve(int n)
{
    int p = 0;
    memset(isprime, true, sizeof(isprime));    // 所有数默认为素数
    isprime[0] = isprime[1] = false;           // 初始化 0 和 1 为 false
    int temp = sqrt(n);
    for (int i = 2; i <= temp; i++)  
    {
        if (isprime[i])         // 如果当前数是素数，那么它的倍数全部置为false，表示非素数
        {
            prime[++p] = i;     // 将数放入素数表,索引增加
            for (int j = i * i; j <= n; j += 2 * i)
            {
                /* 1、为什么是 i * i，不用考虑 i ＊3 到 i ＊（ i－1）之间的数?
                    那么假设 有一个数 p 介于 3 和（ i － 1）之间， 显然 ，如果 i ＊ p 是小于 L 范围之内的数， 
                    在 i ＝ p的时候，就应该判断过这个数了。
                   2、为什么是 += 2i ？
                    因为 += 3i 甚至更大的间距，都会出现重复判断的情况
                    当 i 是 偶数时，偶数的任何倍数都是偶数，2以外的偶数都是非素数
                    因为奇数个奇数相加一定是奇数，偶数个奇数相加一定是偶数。首先我们已经在判断时保证 i 是 奇数，
                    那么 i 个i 相加就可以表示为 i ＊ i，如果增量是 i 且 i ＊ i是奇数的话，i ＊ i ＋i 必定是偶数， 
                    i＊i＋2i 才是奇数，也就说增量是 i 的时候，每两次循环中有一次 就判断偶数（偶数之前已经被2排除过了），
                    这样岂不是违背了要提高效率的初衷？因此，在当前循环中需要处理的只是 奇数且是非素数的情况。
                    j ＝i ＊ i＋2i＝i ＊（ i ＋ 2）显然也是非素数，以此类推 j ＝ j ＋2*i 是非素数，
                    直至该数超过上限结束本次循环。
                */
                isprime[j] = false;
            }
        }
    }
    return p;
}

int main()
{
    sieve(100);
    return 0;
}