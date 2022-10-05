/*
    2	WAP that will take n integers into an array A and m positive integers into array B.
     Now find the difference (set operation) of array A and B or (A-B).
*/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cin >> m;
//     int b[m];
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }
//     sort(a, a + n);
//     sort(b, b + m);
//     int i = 0, j = 0;
//     while (i < n && j < m)
//     {
//         if (a[i] < b[j])
//         {
//             cout << a[i] << " ";
//             i++;
//         }
//         else if (a[i] > b[j])
//         {
//             j++;
//         }
//         else
//         {
//             i++;
//             j++;
//         }
//     }
//     while (i < n)
//     {
//         cout << a[i] << " ";
//         i++;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arra[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arra[i];
    }
    int m;
    cin >> m;
    int arrb[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arrb[i];
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        /*
            arra[]= 7 8 1 5 2 6 4 3
            arrb[]= 1 3 6 0 9 2
        */
        for (int j = 0; j < m; j++)
        {
            if (arra[i] != arrb[j]) 

            {
                count++;
            }
        }
        if (count == m)
            cout << arra[i] << " "; // that is if arr[i] is not present in arrb then print it
    }
    cout << endl;
    return 0;
}
