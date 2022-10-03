#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size; cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    //bubble sort
    for (int i = 1; i <= size-1; i++)
    {
        int flag = 0;
        for (int j = 0 ; j<= size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }


        if(flag == 0)
        {
            break;
        }   

        cout<<"Array after pass i = "<<i<<endl;
        printArray(arr, size);

    }
    cout<<"After Sorting: "<<endl;
    printArray(arr, size);
    

    
    
}