#include <bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin >> n;
     set <int> st;
     for(int i = 0; i < n;i++){
         int num;
         cin >> num;
         st.insert(num);
     }
    set <int> :: iterator it;
    bool ok = false;
    for(it = st.begin();it != st.end();it++){
      if(n == st.size()) ok = true;
      else ok = false;
    }
    if(ok) cout << "YES";
    else cout << "NO";
}