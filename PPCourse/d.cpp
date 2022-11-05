#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n,m, min = INT_MAX;
    cin >> n;
    for(int i = 0 ;i < n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size();i++){
        if(min > v[i]) min = v[i];
    }
   cin >> m;
      for(int i = 0;i < m;i++){
        int x;
        cin >> x;
        if(x % min == 0) cout << x << " ";
    }
}
