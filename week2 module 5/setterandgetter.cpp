#include<bits/stdc++.h>
using namespace std;


class Example
{
private: // data private holeo constructor diye set krte parbo, tobe access krte parbo naa
    int x;
    int pass;

public:
    Example(int p)
    {
        pass = p;
    }
    void setter(int a, int p) // setter and getter diye amra private and protected date gulo set kori othoba get kori.
    {
        if(pass == p) x = a;
        else cout<<"Password didn't match"<<endl;
    }
    int getter(int p)
    {
        if(pass == p) return x;
        else cout<<"Password didn't match"<<endl;
    }
};
int main()
{
    Example a(5);
    a.setter(1500,5);

    cout<<a.getter(5)<<endl;

    return 0;

}

