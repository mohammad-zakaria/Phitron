#include<bits/stdc++.h>
using namespace std;

int maxFreq(int arr[], int n)
{
    sort(arr,arr+n);
    int max_count=1, res=arr[0], index=0, current_count=1;
    for(int i =1; i<n; i++)
    {
        if(arr[i] == arr[i-1])
            current_count++;
        else current_count = 1;

        if(current_count>max_count){
            max_count = current_count;
            res = arr[i-1];
            index = i-1;
        }
    }
    return index;
}
int main()
{
    int t; cin>>t;
    while (t--)     
    {
        int n; cin>>n;
        int arr[n] ={};
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int op = 0;
        int index = maxFreq(arr,n);
        for(int j = 0; j<n;j++)
        {
            if(arr[index] != arr[j] && j != index)
            {
                op++;
            }
        }
        cout<<op<<endl;
        
    }
    
}