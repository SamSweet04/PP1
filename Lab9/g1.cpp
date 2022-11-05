#include <bits/stdc++.h>
using namespace std;
int main(){
     string s;
     cin >> s;
     for(int i = 0; i < s.size();i++){
         if(s[i] == '1'){
             if(i > 0 && s[i - 1] == '1'){
                 s[i] = 'x';
                 s[i - 1] = 'x';
             }
         }
     }
     for(int i = 0; i < s.size();i++){ 
         if(s[i] != 'x') {
             cout << s[i];           
         }
     }
     return 0;
}
