//Problem H. 74819.Digits
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    bool ok = true;
    int cnt = 1,checkpoint = 0;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    cout << s;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == s[i+1]){
            cnt ++;
        } else {
            if(checkpoint == 0){
                checkpoint = cnt;
                cnt = 1;
            } else {
                if(checkpoint == cnt){
                    cnt = 1;
                }
            else {
                ok = false;
                break;
            }
        }
        }
        if(ok == true )cout << "YES";
        else cout<<"NO";
    }
