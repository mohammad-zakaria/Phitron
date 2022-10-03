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
    // insertion sort
    // step of insertion sort
    // 1. pick an element from the unsorted array
    // 2. compare the picked element with the elements in the sorted array
    // 3. if the picked element is smaller than the sorted array element then swap
    // 4. repeat steps 1 to 3 for n-1 times
    
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
        cout<<"Array after pass i = "<<i<<endl;
        printArray(arr, size);
    }
    cout<<"After Sorting: "<<endl;
    printArray(arr, size);
    
}