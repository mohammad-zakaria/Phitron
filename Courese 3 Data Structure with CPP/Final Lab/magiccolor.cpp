/*
    Problem Statement

Arif, the magician is putting some magic colors in a box serially. But he is not providing any divider between the colors. So, the color may be mix up instantly.

There are three types of colors- Red, Green and Blue. How they could mix up is given below -

Red+Blue = Purple
Red+Green = Yellow
Blue+Green = Cyan
And there are some other problems. If two same type of colors mix up, they will vanish each other. For example if two Purple colors get together, both of them will be vanished.

Can you help the magician to get the final colors that will be in the box?

Input Format

First line will contain T, the number of test cases.
Next line will contain N, number of colors in the box.
Next line will contain N characters (R,G,B only) , first capital letter of the color.
Constraints

0 < T <= 100
0 < N <= 100
Output Format

Output the first capital letter of the colors that are saved finally.
Sample Input 0

2
3
RBG
4
RGBB
Sample Output 0

PG
Y
Sample Input 1

5
6
RGGRRG
6
RGRGRG
4
RGGR
5
RGGGR
4
RGGB
Sample Output 1

Y
Y

YR
YC
*/

#include <bits/stdc++.h>
using namespace std;
/*

*/
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        stack<char> st;
        int n;
        cin >> n;
        char str[n];
        cin >> str;

        int len = sizeof(str);

        if (len == 0)
        {
            cout << " " << endl;
            break;
        }
        st.push(str[0]);

        for (int i = 1; i < len; i++)
        {
        
            if (!st.empty())
            {
                char tmp = st.top(); 
                if (str[i] == tmp)  
                {
                    st.pop();
                }
                else if ((str[i] == 'R' && tmp == 'B') || (str[i] == 'B' && tmp == 'R'))
                {
                    st.pop();
                    if (!st.empty())
                    {
                        if (st.top() != 'P')
                        {
                            st.push('P');
                        }
                        else
                        {
                            if (st.top() == 'P')
                            {
                                st.pop();
                            }
                            else
                            {
                                st.push(str[i]);
                            }
                        }
                    }
                    else
                    {
                        st.push('P');
                    }
                }
                else if ((str[i] == 'R' && tmp == 'G') || (str[i] == 'G' && tmp == 'R'))
                {
                    st.pop();
                    if (!st.empty())
                    {
                        if (st.top() != 'Y')
                        {
                            st.push('Y');
                        }
                        else
                        {
                            if (st.top() == 'Y')
                            {
                                st.pop();
                            }
                            else
                            {
                                st.push(str[i]);
                            }
                        }
                    }
                    else
                    {
                        st.push('Y');
                    }
                }
                else if ((str[i] == 'B' && tmp == 'G') || (str[i] == 'G' && tmp == 'B'))
                {
                    st.pop();
                    if (!st.empty())
                    {
                        if (st.top() != 'C')
                        {
                            st.push('C');
                        }
                        else
                        {
                            if (st.top() == 'C')
                            {
                                st.pop();
                            }
                            else
                            {
                                st.push(str[i]);
                            }
                        }
                    }
                    else
                    {
                        st.push('C');
                    }
                }
                else
                {
                    st.push(str[i]);
                }
            }
            else
            {
                st.push(str[i]);
            }
        }

        stack<char> st2;
        while (!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
        while (!st2.empty())
        {
            cout << st2.top();
            st2.pop();
        }
        cout << endl;

    }
    return 0;
}