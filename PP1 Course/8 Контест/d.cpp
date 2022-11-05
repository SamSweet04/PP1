#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n][n];
    for (int r=0; r<n; r++){
        for (int c=0; c<n; c++){
            if (r==0) cout <<c;
            else if (r==n-1) cout << c+n-1;
            else if (c==0 && r!=0 && r!=n-1) cout << r;
            else if (c==n-1 && r!=0 && r!=n-1) cout << r+n-1;
            else cout <<" ";
        }
        cout << endl;
    }
    return 0;
}
