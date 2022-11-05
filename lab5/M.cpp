//Problem M. 74857.Amount of character
#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    char x;
    cin >> x;
    int n,cnt = 0;
    cin >> n;
    for(int i = 0; i < s.size();i++){
        if(s[i] == x){
            cnt ++;   
        }
    }
    if(cnt == n){
        cout << "YES";
    }else {
        cout << "NO";
    }
}