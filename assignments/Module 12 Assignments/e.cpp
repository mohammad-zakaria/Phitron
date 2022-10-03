#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, q;
        cin>>n>>q;
        int arr[n];
        for(int i =0; i<n; i++)
        {
            cin>>arr[i];
        }
        int type, first_index, addmoney, last_index; 
        // int pre[n]; pre[0] = arr[0];
        // for(int j = 1; j<n; j++)
        // {
        //     pre[j] = arr[j] + pre[j-1];
        // }
        for(int k =0; k<q; k++)
        {
            cin>>type;
            if(type ==1) {
                cin>>first_index;
                cout<<arr[first_index]<<endl;
                arr[first_index] =0;
            }
            else if(type==2) {
                cin>>first_index>>addmoney;
                arr[first_index] +=addmoney;
            }
            
            else if(type==3) {
                cin>> first_index>>last_index;
                int sum=0;
                for(int j=first_index; j<=last_index; j++)
                {
                    sum+=arr[j];
                }
                cout<<sum<<endl;

            }
        }
    }
}