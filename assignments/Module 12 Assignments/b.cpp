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
            int res[q2-q1] = sort(arr[q1-1],arr[q2])
          
            cout<<res[0]<<endl;
        }
     
    }

    return 0;
}