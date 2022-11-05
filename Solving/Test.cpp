#include <bits/stdc++.h>
using namespace std;
int main(){
    stack <string,pair<string,int>> st;
    string s,t;
    int n;
    while(st.size()!= 0){
        cin >> s >> t >> n;
        if(s == "size" && t == "push"){
            cout << "ok\n" << n;
            st.push(n);
        }
        if(s == "size" && t == "pop"){
            cout << n;
            st.pop();
        } 
         if(s == "size" && t == "back"){
            cout << st.top();
        } 
         if(s == "size" && t == "clear"){
            while(st.size()){
                st.pop();
            }
            cout << "ok";
         }
        if(s == "size" && t == "exit"){
            cout << "bye\n";
            return 0;
        }
    }