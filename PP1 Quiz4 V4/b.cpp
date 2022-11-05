#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n;
    cin >> n;
    s.erase(s.begin(),s.begin()+n);
    for(int i = 0; i < s.size();i++){
        cout << s[i];
    }
}