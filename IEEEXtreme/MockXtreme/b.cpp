#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int count,k, res;
        
        for(int i=0;i<n;++i)
        {
            k=i;
            for(int j=i+1;j<n;j++)
            {
                if(a[i]!=a[j])
                {
                    k++;
                    a[k]=a[j];
                }
                else
                    count++;
            }
            res = count;
        }
        cout<<res<<endl;
        
    }
    
}