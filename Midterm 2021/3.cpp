#include <bits/stdc++.h>
using namespace std;
bool Palindrom(string s){
    string t = s;
    reverse(s.begin(),s.end());
    if(t == s) return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    string bit ="";
    for(int i = 0; i < 8;i++){
        bit += (n % 2) + '0';
        n /= 2;
    }
    cout << (Palindrom(bit) ? "It works!" : "Sad");
}