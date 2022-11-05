#include <bits/stdc++.h>
using namespace std;
int main()
{
    set <int> st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        st.insert(num);
    }
    if(n == st.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}