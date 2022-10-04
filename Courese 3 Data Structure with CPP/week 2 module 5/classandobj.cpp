#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
};

int main()
{
    Student rahim;
    strcpy(rahim.name, "Abd Rahim ");
    rahim.roll = 10;

    cout<<rahim.name<<rahim.roll;

    return 0;
}
