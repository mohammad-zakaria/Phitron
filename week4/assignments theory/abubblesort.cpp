#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {7, 2 , 13 , 2, 11, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    // steps of bubble sort for arr
    // 1. compare 1st and 2nd element
    // 2. if 1st element is greater than 2nd element then swap
    // 3. compare 2nd and 3rd element
    // 4. if 2nd element is greater than 3rd element then swap
    // 5. compare 3rd and 4th element
    // 6. if 3rd element is greater than 4th element then swap
    // 7. compare 4th and 5th element
    // 8. if 4th element is greater than 5th element then swap
    // 9. compare 5th and 6th element
    // 10. if 5th element is greater than 6th element then swap
    // 11. repeat steps 1 to 10 for n-1 times
    for(int i=1; i<=n-1; i++){
        int flag = 0;
        cout<<i<<"th iteration:"<<endl;
        for(int j=0; j<=n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
            cout<<"         "<<j+1<<"th step: ";
            printArray(arr, n);
        }
        if(flag == 0){
            break;
        }
    }

    return 0;
}

// Limitations of bubble sort
// 1. It is not efficient for large data sets
// 2. It is not efficient for linked list
// 3. It is not efficient for arrays which are already sorted
// 4. It is not efficient for arrays which are reverse sorted

// solution to the above limitations
// 1. Use insertion sort
// 2. Use selection sort
// 3. Use merge sort
// 4. Use quick sort

