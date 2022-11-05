#include <iostream>
using namespace std;
int sum_of_digits(string s,int i ,int ans){
    if(i == s.size()) return ans;
    ans += s[i] - '0';
    return sum_of_digits(s,i+1,ans);
}
int main(){
    string s;
    cin >> s;
    cout << sum_of_digits(s,0,0);
}