//Problem Q. 74871
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string s,temp = " ";
    string t;
    cin >> s;
    cin >> t;
    for(int i = 0; i < ceil(t.size() / s.size());i++){
        temp += s;
}
if (temp == t)
    cout << "YES";
    else cout << "NO"; 
}