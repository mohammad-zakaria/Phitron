#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && a==c && b==c)
    {
        cout<<1<<endl;
    }
    else if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a))
    {
         cout<<2<<endl;
    }
    else if(a!=b && a!=c && b!=c)
    {
         cout<<3<<endl;
    }
     
     return 0;
}
