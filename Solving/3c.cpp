#include <bits/stdc++.h>
using namespace std;
void Counter(string n){
    int cnt = 1;
	string s;
    getline(cin,s);
	for (auto c : s)
	  if (c == ' ') cnt++;
      cout << cnt;
}
int main(){
    int d = Counter(n);
    string words;
    map <string,int> m;
    for(int i = 0; i < Counter(n);i++){
        cin >> words;
        m[s]++;     
    }
    for (auto i : m)
    {
        cout << i.first << " " << i.second;
    }
    cout << endl;
}