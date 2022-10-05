/*
    1WAP that will take n integers into an array. Now find out the number of occurrences for each of the unique numbers. 
    Each line of the output will be a unique number that exists in the array and its frequency. You can print them in any order
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
        else
        {
            cout << a[i] << "=>" << count << endl;
            count = 1;
        }
    }
    return 0;
}