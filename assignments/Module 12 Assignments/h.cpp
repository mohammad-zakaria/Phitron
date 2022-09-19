#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    string str;
    cin>>str;
    int first_index = 0;
    while (str[first_index] != 'A') first_index++;
    int last_index = str.length() - 1;
    while (str[last_index] != 'Z') last_index--;
    cout<<last_index - first_index + 1<<endl;
    return 0;
}