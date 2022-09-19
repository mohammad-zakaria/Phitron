#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int index = 0;
        int firstsample= arr[0];
        for (int j = 0; j < n; j++)
        {
            if(arr[j] == firstsample) index = j;
        }
        cout<<n-(index+1)<<endl;
        
    }
}