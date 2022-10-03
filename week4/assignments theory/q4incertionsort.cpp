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
    int arr[] = { 5, 1, 3, 8, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    // Insertion sort steps for arr[] = { 5, 1, 3, 8, 2, 2}
    for (int i = 0; i < n; i++)
    {
        // 1. Pick a key
        int current = arr[i];
        int j = i-1;
        //step 2: compare the picked element with the elements in the sorted array
        while(arr[j]>current && j>=0)
        {
            //step 3: if the picked element is smaller than the sorted array element then swap
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
        cout<<"Array after iteration "<<i+1<<": ";
        printArray(arr, n);
    }
    
    
    return 0;
}