#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<char> st;
    string s;
    cin >> s;  // (()(()))
    bool res = true; // крайний случаи
    for(int i = 0;i < s.size();i++){
        if(s[i] == '('){
            st.push('(');       // 
        }else if(s[i] == ')'){
            if(!s.empty()){
                st.pop();
            }else{
                res = false;
                break;
            }
        }
    }
    if(res == false || !s.empty()){
        cout << "NO";
    }else{
        cout << "YES";
    }
    return 0;
}