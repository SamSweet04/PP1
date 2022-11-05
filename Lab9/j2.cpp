#include <iostream>
#include <map>
using namespace std;
int main(){
    int n; cin >> n;
    map < string,int > serials;
    for(int i = 0; i < n;i++){
        string s; cin >> s;
        int k; cin >> k;
        serials[s] += k;
    }
    map<string, int> :: iterator it;
    for(it = serials.begin();it != serials.end();it++){
        cout << it->first << " " << it -> second << endl;
    }
    return 0;
}
