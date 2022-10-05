#include<bits/stdc++.h>
#include "ZakariaStack.h"

using namespace std;

// precision calculation function
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
// infix to prefix
string infixToPrefix(string s)
{
    reverse(s.begin(), s.end()); //   ) --> opening bracket and ( --> closing bracket
    Stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= '0' && s[i] <= '9'))
        {
            res += s[i];
        }
        else if (s[i] == ')')
        {
            st.push(s[i]);
        }
        else if (s[i] == '(')
        {
            while (!st.empty() && st.Top() != ')')
            {
                res += st.Top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && prec(s[i]) <= prec(st.Top()))
            {
                res += st.Top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res += st.Top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}

// prefix Evaluation 
int prefixEvaluation(string chk)
{
    Stack<int> st;
    for (int i = chk.length() - 1; i >= 0; i--)
    {
        // chk[i] 0 to 9 --> Operand
        if (chk[i] >= '0' && chk[i] <= '9')
        {
            st.push(chk[i] - '0');
        }
        // chk[i]  + - * / --> Operator
        else
        {
            int op1 = st.pop();
            int op2 = st.pop();
            switch (chk[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;

            default:
                break;
            }
        }
    }
    return st.Top();
}

int main()
{
    string infix = "(7+(4*5))-(2+0)";
    string prefix;
    prefix = infixToPrefix(infix);

    cout<<endl<<prefix<<endl
        <<prefixEvaluation(prefix)<<endl
        <<endl;

    return 0;
}