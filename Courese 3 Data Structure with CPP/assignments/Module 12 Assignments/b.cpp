#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i =0; i<t; i++)
    {
       
        int n,q;
        cin>>n>>q;
        int arr[n] = {};
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        cout<<"Case "<<i+1<<":"<<endl;
        for(int k =0; k<q; k++)
        {
            int q1,q2;
            cin>>q1>>q2;
            int small = arr[q1-1];

            for(int l = q1-1;l<q2;l++)
            {
                if(arr[ l] <small) small = arr[l];

            }
            cout<<small<<endl;
        }
     
    }

    return 0;
}