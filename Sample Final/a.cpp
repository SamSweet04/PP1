#include <bits/stdc++.h>
using namespace std;

void getres(string s,int cnt){
    if(s.size() < 2){
        cout << s << " " << cnt;
        return;
    }
    int sum = 0;
    for(int  i = 0;i < s.size();i++){
        sum += (s[i] - '0');
    }
    cnt++;
    string tmp = "";
    while(sum){
        tmp += (sum % 10) + '0';
        sum /= 10;
    }
    getres (tmp, cnt);
}

  int main(){
      string s;
      cin >> s;
      if(s.size() < 2){
          cout << s << " " << 0;
          return 0;
      }
      getres(s,0);
  }
