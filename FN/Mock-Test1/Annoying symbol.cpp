#include <bits/stdc++.h>
using namespace std;
int main(){
    map <char, int> freq;
    string s;
    cin >> s;
    for(int i = 0; i < s.size();i++){
        freq[tolower(s[i])]++;
    }
    int max = 0,cnt = 0;
    for(auto i : freq){
        if(i.second > max){
            max = i.second;
        }
    }
    for(auto i : freq){
        if(i.second == max) cnt++;
    }
    if(cnt == freq.size()) cout << "All gone!";
    else {
        for(int i = 0; i < s.size();i++){
            if(freq[tolower(s[i])] != max) cout << s[i];
        }
    }
}