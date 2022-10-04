#include <bits/stdc++.h>
#include "MYSTACK.h"

using namespace std;

/*
    stack of int , float , char , string, double ,
    pair, struct, objects of
    class
*/

int gloabalID = 100;

class person
{
    string name;
    int id;
    float salary;

public:
    person()
    {
        name = " ";
        id = -1;
        salary = -1.00;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setSalary(float salary)
    {
        this->salary = salary;
    }

    person(string name, float salary)
    {
        setName(name);
        setSalary(salary);
        id = gloabalID;
        gloabalID++;
    }

    int getID()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Stack<person> st;
    person a ("Zakaria", 10000.00);
    person b ("Rakib", 20000.00);
    person c ("Sakib", 30000.00);

    st.push(a);
    st.push(b);
    st.push(c);

    // while (!st.empty())
    // {
    //     person printObj;
    //     printObj = st.pop();
    //     printObj.print();
    // }

    person printObj;
    printObj = st.Top();
    printObj.print();

    cout<<st.size()<<endl;

    // Stack <pair <int, char> > st;
    // st.push(make_pair(1, 'a'));
    // st.push(make_pair(2, 'b'));
    // st.push(make_pair(3, 'c'));

    // while (! st.empty())
    // {
    //     pair<int, char> chk;
    //     chk = st.pop();
    //     cout<<chk.first<<" | "<<chk.second<<endl;
    // }

    // cout<<st.size()<<endl;
    // if(!st.empty() ) {
    //     pair <int, char> chk;
    //     chk = st.Top();
    //     cout<<chk.first<<" | "<<chk.second<<endl;
    // }

    return 0;
}