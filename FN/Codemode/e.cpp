#include <bits/stdc++.h>
using namespace std;
int main()
{
    set <string> st;
    map <int, string> mp;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int cnt = 0;
        bool seven = false, letter_j = false;
        string num;
        cin >> num;
        for(int j = 0; j < num.size(); j++)
        {
            if(num[i] == 'J') letter_j = true;
            
            if(num[j] == '7')seven = true;
            
        }
        if(seven) cnt++;
        
        if(letter_j)cnt++;
        
        if(seven or letter_j)
        {
            mp[cnt] = num;
        }
        else
        {
            st.insert(num);
        }
    }
    if(st.size() < n)
    {
        cout << "Jaqs is mad";
    }
    else
    {
        int k = 0;
        cout << "Jaqs likes it\n";
        if(mp.size() > 0)
        {
            for(map <int, string> :: reverse_iterator it = mp.rbegin(); it != mp.rend(); it++)
            {
                cout << it -> second << " ";
            }
        }
        for(auto i : st)
        {
            if(k < n - mp.size())
            {
                cout << i << " ";
                k++;
            }
        }
    }
}