#include<bits/stdc++.h>
using namespace std;


class Example
{
private: // data private holeo constructor diye set krte parbo, tobe access krte parbo naa
    int x;
    int y;
    int z;
public:
    Example(int a, int b, int c) // constructor always be public
    {
        x = a;
        y = b;
        z =c;
    }
};
int main()
{
    Example a(10,20,30);
    cout<<a.x<<" "<<a.y<<endl;

    return 0;

}
