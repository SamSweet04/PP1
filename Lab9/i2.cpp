#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    map <string,bool > m;
    string s;
    for(int i = 0; i < n;i++){
        cin >> s;
        if(m[s] == false){ 
        m[s] = true;
        cout << "new user added" << endl;
    }
     else {
         cout << "user already exists" << endl;
    }
  }
}