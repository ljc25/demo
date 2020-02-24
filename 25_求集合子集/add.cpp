/* 把每个和等于m的子集输出。 */
#include <bits/stdc++.h>

using namespace std;



void trail(int[], int[], int, int);

queue<int> temp; //临时队列判断当前数组和是否为m

int sum;

int m;



int main()

{

    int n, k = 0;

    cout << "Please enter the sum you want :";

    cin >> m;

    cout << "Please enter the number of the element :";

    cin >> n;

    int a[100];

    int b[100] = {0};

    for (int i = 0; i < n; i++)

    {

        cout << "Please enter NO." << i + 1 << " element :";

        cin >> a[i];

    }

    cout << "All of the subset is:" << endl;

    trail(a, b, 0, n);

    return 0;

}



void trail(int a[], int b[], int k, int n)

{

    int j;

    if (k < n)

    {

        trail(a, b, k + 1, n);

        b[k] = 1 - b[k];

        trail(a, b, k + 1, n);

    }

    else

    {

        //   cout<<"{";

        for (j = 0; j <= n; j++)

        {

            if (b[j])

            {

                // cout<<a[j]<<" ";

                temp.push(a[j]);

                sum += a[j];

            }

        }

        if (sum == m)

        {

            cout << "{";

            while (!temp.empty())

            {

                cout << temp.front() << " ";

                temp.pop();

            }

            cout<<"} ";

        }

        else

        {

            while (!temp.empty())

            {

                temp.pop();

            }

        }

        //   cout<<"} " << "sum:"<<sum <<"  ";

        sum = 0;

    }

}