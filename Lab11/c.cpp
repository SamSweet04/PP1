#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum = 0; cin >> n;
    vector <pair <double, string> > v;
    map<string ,int> m; 
      for(int i = 0; i < n;i++){
        string s;int  n;
        cin >> s >> n;
        m[s] += n; 
        sum += n;
    }
    map <string,int> :: iterator it;
    for(it = m.begin();it!= m.end();it++){
        v.push_back({(double)it->second*100/sum,it->first});
    }
    sort(v.rbegin(),v.rend());
    for(int i = 0; i < v.size();i++){
        cout << v[i].second <<" "<< v[i].first << "%\n";
    }
    
}