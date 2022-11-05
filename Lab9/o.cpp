#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <string, string> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string login, password;
        cin >> login >> password;
        m[login] = password;
    }
    int k;
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        bool correct_pass = false, correct_login = false;
        string alogin, apassword;
        cin >> alogin >> apassword;
        for(auto i : m)
        {
            if(i.first == alogin)
            {
                correct_login = true;
            }
            if(i.second == apassword)
            {
                correct_pass = true;
            }
        }
        if(correct_login)
        {
            if(correct_pass)
            {
                cout << "correct password\n";
            }
            else
            {
                cout << "password error\n";
            }
        }
        else
        {
            cout << "login error\n";
        }
    }
}