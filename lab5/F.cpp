//Problem F. 74222.Segment
#include <iostream>
using namespace std;
int main(){
    string s , temp;
    cin >> s;
    int l,r,length;
    cin >> l >> r;
    length  = r - l + 1;
    temp = s.substr(l,length); //
    cout << temp;
}

// string s,temp = " ";
// cin >> s;
// int l, r ,length;
// for(int i = l, i <= r, i++){
//     temp +=s[i];
// }
// cout << temp;