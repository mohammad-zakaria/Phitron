#include<bits/stdc++.h>
#include "MYSTACK.h"

using namespace std;

void reverseSentence(string str){

    Stack<string> st;
    
    for (int i = 0; i < str.length(); i++)
    {
        string word = "";

        while (str[i] != ' ' && i < str.length())
        {
            word += str[i];
            i++;
        }
        /*
            "I am Zakaria"
            word = "I" -> push
            word = "am" -> push
            word = "Zakaria" -> push
            
        */
        st.push(word);
    }

    while (!st.empty())
    {
        cout << st.Top() << " ";
        st.pop();
    }
    
}

int main()
{
    string s = "I am Zakaria";
    reverseSentence(s);

    return 0;
}

