#include <bits/stdc++.h>
using namespace std;
int main(){
      int n;
      cin >> n;
      vector<pair<int,int>> v;
      for(int i = 0; i < n;i++){
          int x,y;
          cin >> x >> y;
          v.push_back(make_pair(x,y));
      }
      sort(v.begin(),v.end());
      vector<pair<int,int>> :: iterator Saule;
      for(Saule = v.begin();Saule != v.end(); Saule++){
        cout << Saule->first << " "  << Saule->second << endl;
    }


    return 0;
}
