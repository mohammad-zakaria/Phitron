#include<bits/stdc++.h>
using namespace std;

/*
    Friend class can access both private and protected date
*/
class Parent
{
private:
    int taka;
protected:
    int password;
public:
    Parent(int tk, int ps)
    {
        taka = tk;
        password = ps;
    }
    friend class Babarfriend;
    friend void tellSec(Parent *ptr);
};
class Babarfriend
{
public:
    void tellsecret(Parent *ptr)
    {
        cout<<ptr->password<<endl;
    }
};

void tellSec(Parent *ptr)
{
    cout<<ptr->taka<<" "<< ptr-> password <<endl;
}
int main()
{

    Parent pt(1500,2345);
    Babarfriend bondhu;
    bondhu.tellsecret(&pt);
    tellSec(&pt);

    return 0;
}
