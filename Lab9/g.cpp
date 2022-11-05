#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack<char> st;
    int cnt = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '0'){                  
            st.push('0');
            cnt = 0;
        }
        if(s[i] == '1'){
            st.push('1');
            cnt++;                   
        }
        if(cnt == 2){
            st.pop();
            st.pop();
            cnt = 0;
        }
    }
    vector<char> v;
    int c = 0;
    while(!st.empty()){
        v.push_back(st.top());              
        st.pop();
        c++;                        
    }
    reverse(v.begin(),v.end());   
    for(int i = 0;i < c;i++){
        cout << v[i];              
    }
    return 0;
}