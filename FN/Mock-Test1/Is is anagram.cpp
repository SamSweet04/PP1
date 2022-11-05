#include <bits/stdc++.h>
using namespace std;
int main()
{
    string t, s, temp = "";
    vector <string> words;
    getline(cin, t);
    cin >> s;
    for(int i = 0; i < t.size(); i++)
    {
        if(t[i] == ' ')
        {
            words.push_back(temp);
            temp = "";
        }
        else
        {
            temp += t[i];
        }
        if(i == t.size() - 1)
        {
            words.push_back(temp);
        }
    }
    sort(s.begin(), s.end());
    vector <string> v;
    vector <string> v2;
    for(auto i : words)
    {
        sort(i.begin(), i.end());
        v.push_back(i);
    }
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] != s)
        {
            v2.push_back(words[i]);
        }
    }
    sort(v2.begin(), v2.end());
    if(v2.size() == 0)
    {
        cout << "There is none left";
    }
    for(auto i : v2)
    {
        cout << i << " ";
    }
}