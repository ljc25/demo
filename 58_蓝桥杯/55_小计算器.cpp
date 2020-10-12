#include <bits/stdc++.h>

using namespace std;

/*
　　1. 数字：'NUM X'，X为一个只包含大写字母和数字的字符串，表示一个当前进制的数
　　2. 运算指令：'ADD','SUB','MUL','DIV','MOD'，分别表示加减乘，除法取商，除法取余
　　3. 进制转换指令：'CHANGE K'，将当前进制转换为K进制(2≤K≤36)
　　4. 输出指令：'EQUAL'，以当前进制输出结果
　　5. 重置指令：'CLEAR'，清除当前数字
*/

// 将 x 转换为 n进制数,并用字符串返回
string toans(long long x, int jz)
{
    if (x == 0)
    {
        return "0";
    }
    string ans;
    while (x)
    {
        if (x % jz < 10)
            ans += (x % jz) + '0';
        else
        {
            ans += (x % jz) - 10 + 'A';
        }
        x /= jz;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

//将字符串num,转为long long
long long toll(string num, int jz)
{
    long long ans = 0;
    int len = num.length();
    for (int i = 0; i < len; i++)
    {
        if (num[i] >= '0' && num[i] <= '9')
            ans = ans * jz + num[i] - '0';
        else
        {
            ans = ans * jz + num[i] - 'A' + 10;
        }
    }
    return ans;
}

//计算 a op b 的结果
long long oper(long long a, long long b, string op)
{
    if (op == "ADD")
    {
        return a + b;
    }
    else if (op == "SUB")
    {
        return a - b;
    }
    else if (op == "MUL")
    {
        return a * b;
    }
    else if (op == "DIV")
    {
        return a / b;
    }
    else
    {
        return a % b;
    }
}

int main()
{
    int n;          // 指令条数
    string str;     // 当前指令
    string op, num; // 操作符 操作数
    cin >> n;
    int jz = 10;
    long long llans = 0;
    while (n--)
    {
        cin >> str;
        // 读入N进制的数
        if (str == "CLEAR"){
            op.clear();
            num.clear();
            llans = 0;
        }else if (str == "CHANGE"){
            cin >> jz;
        }else if (str == "EQUAL"){
            cout << toans(llans,jz) << endl;
            op.clear();
        }else if (str == "NUM"){
            cin >> num;
            if(!op.empty()){
                llans = oper(llans,toll(num,jz),op);
            }else{
                llans = toll(num,jz);
            }
        }else{
            op = str;
        }
    }
    return 0;
}