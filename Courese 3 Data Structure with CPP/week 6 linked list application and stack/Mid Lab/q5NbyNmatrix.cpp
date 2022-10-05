#include <iostream>

using namespace std;

int main()
{
    int n;

    cin>>n;
    int matrix[n][n];
    if(n%2 !=1) {
        cout<<"n must be odd"<<endl;
    }
    else {
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++)
            cin>>matrix[i][j];
        }
        if(n==1) {
            cout<<matrix[0][0]<<endl;
        } else {
            int sum = 0;
        for (int i=0;i<n/2;i++){
            sum = sum + matrix[0][i];
        }
        int m = (n/2)+1;
        for (int i=m;i<n;i++){
            sum = sum + matrix[n-1][i];
        }
        for (int i=0;i<n/2;i++){
            sum = sum + matrix[i][n-1];
        }
        for (int i=m;i<n;i++){
            sum = sum + matrix[i][0];
        }
        for(int i=0;i<n;i++) {
            sum = sum + matrix[i][m-1];
            sum = sum + matrix[m-1][i];
        }
        sum = sum - matrix[m-1][m-1];
        cout<<sum<<endl;
        }
    }

    return 0;
}