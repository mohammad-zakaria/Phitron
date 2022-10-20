/*
1, 2, 4. 9, 12,14,16,21,32,35

*/
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

// steps of binary search
// 1. find the mid
// 2. check if mid is the element
// 3. if mid is the element then return mid
// 4. if mid is not the element then check if mid is greater or less than the element
// 5. if mid is greater than the element then search in the left half
// 6. if mid is less than the element then search in the right half
// 7. repeat the steps until the element is found

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n-1;
    while (start <= end)
    {
        int mid = (start + end)/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int size; cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int key; cin>>key;
    cout<<binarySearch(arr, size, key)<<endl;
}