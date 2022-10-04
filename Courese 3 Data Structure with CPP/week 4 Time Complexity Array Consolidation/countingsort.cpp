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

    // Step 1: Max |  Counting Sort
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<"Before Sorting: "<<endl;
    printArray(arr, size);

    // Step 2: Cout[Max+1] Initialization | Counting Sort
    int count[max+1];
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    cout<<"Count Array Initialization: "<<endl;
    printArray(count, max+1);

    // Step 3: Frequency | Counting Sort

    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    cout<<"Count Array: "<<endl;
    printArray(count, max+1);

    // Step 4: Cumulative Sum
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i-1];
    }
    cout<<"Prefix Sum Array: "<<endl;
    printArray(count, max+1);

    // Step 5: Output Array
    int output[size];
    for (int i = size-1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    
    // Step 6: Print Sorted Array
    cout<<"After Sorting: "<<endl;
    printArray(output, size);



}