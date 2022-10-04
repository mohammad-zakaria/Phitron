#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 9, 11, 17, 24, 26, 31, 32, 45};
    int size = sizeof(arr)/sizeof(arr[0]);
    // Binary search steps for arr[] = {1, 2, 9, 11, 17, 24, 26, 31, 32, 45}
    //1. pick a key
    //2. compare the key with the middle element
    //3. if the key is equal to the middle element then return the index
    //4. if the key is less than the middle element then search in the left subarray
    //5. if the key is greater than the middle element then search in the right subarray
    //6. repeat steps 2 to 5 until the key is found or the subarray is empty

    // Given key is 6
    int key = 26;
    int low = 0;
    int high = size-1;
    int mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"Key 6 found at index "<<mid<<endl;
            return 0;
        }
        else if(arr[mid]>key)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    cout<<"Key not found"<<endl;
    return 0;

    // we can solve the problem with the help of recursion as written in bs() function

}
    