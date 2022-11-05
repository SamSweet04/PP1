#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    map<int,string> m;
    cin >> n;
    string s;
    for(int i = 0; i < n;i++){
    cin >> s >> x;
    m[x] += s;    
    }
    map<int,string> :: reverse_iterator it;
    for(it = m.rbegin();it!=m.rend();it++){
        cout << it->second << " " << it->first << endl;
    }
}
