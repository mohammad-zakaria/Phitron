#include <bits/stdc++.h>
#include <stack>

using namespace std;

/*
    Declare a character stack (say temp).
Now traverse the string exp.
If the current character is a starting bracket ( ‘(‘ or ‘{‘  or ‘[‘ ) then push it to stack.
If the current character is a closing bracket ( ‘)’ or ‘}’ or ‘]’ ) then pop from stack and if the popped character is the matching starting bracket then fine.
Else brackets are Not Balanced.
After complete traversal, if there is some starting bracket left in stack then Not balanced, else Balanced.
*/
bool balancebraket(string s)
{
    int size = s.length();

    stack<char> st;

    bool isBalanced = true;

    for (int i = 0; i < size; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (st.empty())
            {
                isBalanced = false;
                break;
            }
            else if (s[i] == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (s[i] == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if (s[i] == ']' && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                isBalanced = false;
                break;
            }
        }
    }
    if (!st.empty())
    {
        isBalanced = false;
    }
    return isBalanced;
}

int main()
{
    string check;
    cin >> check;

    if (balancebraket(check))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not Balanced" << endl;
    }

    return 0;
}

/*



*/