// White Walkers and Candies
/*
In planet-X, The North is the coldest place on this planet . For keeping themselves warm, White walkers from the North like candies very much.

There are N White walkers in the North .The White walker with number K (1 ≤ K ≤ N) will be happy if he receives at least double of A[k] candies. There are total C candies in all in the North Candy Bank.

The North Candy Bank staff is interested in knowing whether it is possible to make all the N White walkers happy by giving each White walker at least as many candies as they wants, that is, the Kth White walker should receive at least double of A[k] candies. Each candy can be given to only one White walker. Print Yes if it is possible and No otherwise.

Input Format

The first line of the input file contains an integer T, the number of test cases.
Each test case consists of exactly 2 lines. The first line of each test case contains two space separated integers N and C, the total number of White walkers and the total number of candies in the North Candy Bank.
The second line contains N space separated integers A[1], A[2], ..., A[N].
Constraints

0 < T <= 1000
1 <= N <= 100
1 <= C <= 10^9
1 <= A[K] <= 10000 where 1 <= K <= N
Output Format

Output "Yes" or "No" without the quotation.
 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        int a;
        int sum=0;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum+= 2*a;
        }
        if(sum<=c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}

