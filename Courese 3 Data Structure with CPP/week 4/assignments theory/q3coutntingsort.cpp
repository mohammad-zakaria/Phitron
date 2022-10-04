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
    // counting sort
    // step of counting sort
        // 1. find maximum element in the array
        // 2. create a count array of size max+1 and initialize it with 0
        // 3. frequency of each element in the array is stored in the count array
        // 4. find the cumulative frequency of the count array
        // 5. place the elements in the sorted array


    int arr[] = {7, 2, 9, 2 , 7, 4 , 5 , 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Step 1: Maximum element in the array is: "<<max<<endl;

    // step 2 Count array initialization
    int count[max+1] = {0};
    cout<<"Step 2: Count array initialization: "; 
    printArray(count, max+1);

    // step 3 Frequency count
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    cout<<"Step 3: Frequency count: ";
    printArray(count, max+1);

    // step 4 Cumulative sum
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i-1];
    }
    cout<<"Step 4: Cumulative sum: ";
    printArray(count, max+1);

    // step 5 Sorting
    int output[size];
    for (int i = size-1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    cout<<"Step 5: Sorting: ";
    printArray(output, size);


}