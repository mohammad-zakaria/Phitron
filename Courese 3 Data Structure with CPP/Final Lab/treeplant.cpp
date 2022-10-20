#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) arr[i] = 1;

    for (int i =2; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<i; j++)
        {
            sum += arr[j];
        }
        arr[i] = sum;
    }
    long long int temp = pow(2,n-1);
    cout<<arr[n-1]*temp;
}