#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter the sizeof matrix:";
    cin >> n;
    while (n % 2 == 0)
    {
        cout << "Enter the sizeof matrix(It must be odd):";
        cin >> n;
    }
    int a[n][n];
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j < n; j = j + 2)
            {
                sum = sum + a[i][j];
            }
        }
        if (i % 2 != 0)
        {
            for (int k = 0; k < n; k++)
            {
                sum = sum + a[i][k];
            }
        }
    }
    cout << sum;
    return 0;
}
