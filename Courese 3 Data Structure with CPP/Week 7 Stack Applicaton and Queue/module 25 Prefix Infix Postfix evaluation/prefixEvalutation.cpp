#include <bits/stdc++.h>
#include "ZakariaStack.h"

using namespace std;

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
    string chk = "+*423"; // equivalent infix notation ((4*2)+3)
    cout << prefixEvaluation(chk) << endl;


    return 0;
}