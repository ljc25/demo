#include <bits/stdc++.h>

using namespace std;

bool b = true;
bool first = true;
int n;
string a;
int sum;
int dd[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
map<int,char>c;

int main()
{
    c[0]='1';
    c[1]='0';
    c[2]='X';
    c[3]='9';
    c[4]='8';
    c[5]='7';
    c[6]='6';
    c[7]='5';
    c[8]='4';
    c[9]='3';
    c[10]='2';
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        getline(cin, a);
        for (int j = 0; j < 17; j++)
        {
            if (a[j] >= '0' && a[j] <= '9')
                continue;
            else
            {
                cout << a << endl;
                b = false;
                first = false;
                break;
            }
        }
        if (first == true)
        {
            for (int k = 0; k < 17; k++)
            {
                sum = sum + ((a[k] - '0')*dd[k]);
            }
            sum%=11;
            if(c[sum] == a[17])
                continue;
            else
            {
                cout << a <<endl;
                b = false;
            }
                 
        }
        first = true;
    }
    if(b==true)
        cout << "All passed";
    return 0;
}