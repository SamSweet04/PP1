#include <bits/stdc++.h>
using namespace std;
int Even(string s,int i, int ans){
    if(i == s.size()) return ans;
    if(int(s[i] - '0') % 2 == 0) return Even(s,i + 1, ans + 1);
    return Even(s, i + 1,ans);
}
int main(){
    string s;
    cin >> s;
    cout << Even(s, 0, 0);
}