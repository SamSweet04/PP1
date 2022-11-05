#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack <char> st;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '(') st.push('(');
        else if(s[i] == ')') {
            if(st.empty()) {
            cout << "NO";
            return 0; // not break, return 0 is correct;
            }
            if(st.top() == '(') st.pop();
        }
        else {
            cout << "NO";
            break;
    }
    }
    if(st.empty() == 1 ) cout << "YES";
    else cout << "NO";
}