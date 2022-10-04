#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    int x;
    void sayhi()
    {
        cout<<"Hi"<<endl;
    }
    // Adding Private Value, can't access from outside the class
private:  // Only its friends can access
    int y;
protected: // friends and child can access
    int z;
};
int main()
{
    Student zack;
    zack.x = 10;
    zack.sayhi();

    return 0;
}
