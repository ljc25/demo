// 将传入的数据默认转换为0和 1 的二进制
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    string str1, str2;
    while (cin >> n >> m)
    {
        bitset<8> b(n);         //  bitset是一个特殊数组 8是位数 
        str1 = b.to_string();   // 变为字符串
        int len1 = str1.length();
        for (int i = 0; i < len1; i++)    // 此处的顺序和普通数组不同，bitset的索引0是最后面
        {
            if (str1[i] == '0')
                printf(" ");
            else
                printf("*");
        }
        bitset<8> c(m);
        str2 = c.to_string();
        int len2 = str2.length();
        for (int i = 0; i < len2; i++)
        {
            if (str2[i] == '0')
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}