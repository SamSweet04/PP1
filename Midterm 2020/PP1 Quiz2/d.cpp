//Problem D. Not a palindrome
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    int cnt;
    cin >> s;
    t = s;
    reverse(t.begin(),t.end());
    if(s == t){
        for(int i = 0; i < s.size();i++){
            s.erase(i, 1);
            t = s;
            reverse(t.begin(),t.end());
            if(t != s){
                cnt = s.size() - i;
                break;
            }
        }
        cout << cnt;
        return 0;

    } else {
        cout << s.size();

    }
    return 0;

}