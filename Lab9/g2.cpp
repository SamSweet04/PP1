#include <bits/stdc++.h>
using namespace std;
int main(){
      stack <char> st;
      string s;
      cin >> s;
      for(int i = 0; i < s.size();i++){
        if(s[i] == '0') st.push('0');
        else if(s[i] == '1'){
            if(!st.empty() && st.top() == '1') 
            st.pop();
            else st.push('1');   
          }
      }
      string result = "";
      while(!st.empty()){
          result = st.top() + result;
          st.pop();
      }
      cout << result << endl;
}





