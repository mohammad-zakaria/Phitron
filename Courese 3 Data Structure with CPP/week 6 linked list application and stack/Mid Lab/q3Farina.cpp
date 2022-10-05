#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Test Cases
    int T;
    cin>>T;
    // Loop for test cases
    while(T--)
    {
        // 
        int D;
        cin>>D;

        // Array of earnedMoney
        int earnedMoney[D];
        // Array of spentMoney
        int spentMoney[D];

        // Input of earnedMoney on ith Day
        for(int i=0;i<D;i++)
        {
            cin>>earnedMoney[i];
        }

        // Input of spent money on ith Day
        for(int i=0;i<D;i++)
        {
            cin>>spentMoney[i];
        }

        // Array which stores the totalEarning till ith Day
        int totalEarning[D];

        // 0th Day Earn
        totalEarning[0]=earnedMoney[0];
        for(int i=1;i<D;i++)
        {
            // Total Earning till ith Day
            totalEarning[i]=totalEarning[i-1]+earnedMoney[i];
        }

        // array that store totalSpent till ith Day
        int totalSpent[D];

        // 0th Day Spent
        totalSpent[0]=spentMoney[0];

        for(int i=1;i<D;i++)
        {
            // Spent till ith Day
            totalSpent[i]=totalSpent[i-1]+spentMoney[i];
        }

        // Query
        int Q;
        cin>>Q;

        int ans[Q]; // array which stores the answer of the ith query
        int count=0;
        while(Q--)
        {
            // Day of query  input
            int x;
            cin>>x;
            // get totalEarnedMoney till xth Day
            int available=totalEarning[x];

            // get totalSpentMoney till xth Day
            int spent=totalSpent[x];

           
            int result=available-spent;
           
           
            if(result<0)
            {
                ans[count++]=0;
            }
            else
            {
                ans[count++]=1;
            }
        }
        
        for(int i=0;i<count;i++)
        {
            cout<<ans[i]<<" "; // status of Farina on ith Day
        }
        cout<<endl;

    }
}