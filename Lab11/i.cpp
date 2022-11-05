#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s ){
    string t = s;
    reverse(s.begin(),s.end());
    return t == s;
}
int main(){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    do{
        if(isPalindrome(s)) {
            cout << "ZA WARUDO TOKI WO TOMARE"<<endl;
            return 0;
        }
    }
    while(next_permutation(s.begin(),s.end()));
    cout << "JOJO";
    return 0;
}