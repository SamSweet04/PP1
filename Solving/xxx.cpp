#include <iostream>

using namespace std;

int main(){
  int n; cin >> n;
  int a[n][n];
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++) cin >> a[i][j];
  }
  int q; cin >> q;
  for(int i=0; i<q; i++){
    int m, e, b, x; cin >> m >> e >> b >> x;
    fill(a[m] + e, a[m]+b+1, x);
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}