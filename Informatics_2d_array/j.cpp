#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    n = 2 * n + 1;
    int k = 0; 
    int q[2*n], l = 0, r = n - 1;
    q[0] = n - 1;
    for(int i = 1;i < 2 * n;i++){
        for(int j = 0;j < 2;j++){
            q[++l] = r;
        }
        r -= 1;
    }
    int dx[] = {-1,0,1,0};
    int dy[] = {0,-1,0,1};
    int x = (n - 1)/2,y = (n - 1)/2;
    a[x][y] = 0;
    int t = 0;
    for(int i = 0; i < 2* n;)
}