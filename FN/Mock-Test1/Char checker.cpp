#include <bits/stdc++.h>
using namespace std;
int main(){
    set <char> st;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        for(int j = 0; j < s.size();j++)
            st.insert(s[j]);
    }
     if(st.size() == alphabet.size()){
         cout << "No such characters";
     }
     for(int i = 0; i < alphabet.size();i++){
         if(find(st.begin(),st.end(),alphabet[i]) == st.end())
         cout << alphabet[i];
     }
}
    
