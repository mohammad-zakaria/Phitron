#include<bits/stdc++.h>
using namespace std;

template <class T>T myMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    // function_name <data_type> (arguments);
    cout << myMax <int> (3, 7) << endl;
    cout << myMax <double> (3.0, 7.0) << endl;
    cout << myMax <char> ('g', 'e') << endl;
    return 0;

}