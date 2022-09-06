#include<bits/stdc++.h>
using namespace std;

// polymorphism two types
/*
    1. Compile time ( Two types: a. Function Overloading b. Operator overloading)

    overloading ( same function do different task)

    2. Run time Polymorphism (a. Function overriding b. Virtual Function)

*/

// Function overloading

class Example
{
public:
    int add(int x, int y)
    {
        return x+y;
    }
    double add(double x, double y)
    {
        return x + y;
    }
};

int main()
{
    Example ex;
    cout<<ex.add(1.1, 2.5);

    return 0;
}
