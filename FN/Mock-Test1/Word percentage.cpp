#include <bits/stdc++.h>
using namespace std;
bool cmp(pair <string, double> a, pair <string, double> b)
{
    return a.second > b.second;
}
int main()
{
    map <string, int> m;
    vector <pair<string, double>> percentage;
    vector <string> v;
    string s, temp = "";
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            m[temp]++;
            v.push_back(temp);
            temp = "";
        }
        else
        {
            temp += tolower(s[i]);
        }
        if(i == s.size() - 1)
        {
            m[temp]++;
            v.push_back(temp);
        }
    }
    for(auto i : m)
    {
        percentage.push_back({i.first, (double) m[i.first] * 100 / v.size()});
    }
    sort(percentage.begin(), percentage.end(), cmp);
    for(auto i : percentage)
    {
        cout << i.first << " : " << i.second << "%" << endl;
    }
}