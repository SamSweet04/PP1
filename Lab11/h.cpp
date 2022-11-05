#include <bits/stdc++.h>

using namespace std;

int main (){
    int n; cin >> n;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        char current_char = s[i]+n;
        if(current_char >'Z') current_char -= 26;
        s[i] = current_char;
    }
    cout << s;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     for(int i=0;i<s.size();i++){
//        int k= int(s[i]+n);
//        if(k>90){
//            cout<<char(s[i]-26+n);
//        }
//        else{
//            cout<<char(s[i]+n);
//        }
//     }
// }