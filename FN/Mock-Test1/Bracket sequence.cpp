#include <bits/stdc++.h>
using namespace std;
int main(){
     stack <char> st;
     int n;
     cin >> n;
     bool ok = true;
     for(int i = 0; i <=n ; i++){
         string s;
         getline(cin,s);
         for(int i = 0; i < s.size();i++){
             if(s[i] == '(' || s[i] == '{' || s[i] == '[' || s[i] == '<')
             st.push(s[i]);
             else if(s[i] == ')'){
                 if(st.empty()) ok = false;
                 else if(st.top() == '(') st.pop();
                 else ok = false;
         }
         else if(s[i] == ']'){
                 if(st.empty()) ok = false;
                 else if(st.top() == '[') st.pop();
                 else ok = false;
         }
         else if(s[i] == '}'){
                 if(st.empty()) ok = false;
                 else if(st.top() == '{') st.pop();
                 else ok = false;
         }
         else if(s[i] == '>'){
                 if(st.empty()) ok = false;
                 else if(st.top() == '<') st.pop();
                 else ok = false;
         }
}
if(st.empty() == 0) ok = false;
if(ok) cout << "Yes";
else cout << "No";
} 