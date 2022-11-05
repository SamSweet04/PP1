#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <char> st;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(st.empty())
        {
            st.push(s[i]);  // 1
        }
        else
        {
            
            bool ok = true;
            for(int j = 0; j <= 9; j++)
            {
                if((st.top() - '0') * 10 + (s[i] - '0') == j * j)
                {
                    ok = true;
                    st.pop();
                    break;
                }
                else
                {
                    ok = false;
                }
            }
            if(ok == false)
            {
                st.push(s[i]);
            }
        }
    }
    if(st.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        while(!st.empty())
        {
            cout << st.top();
            st.pop();
        }
    }
}