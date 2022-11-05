//Problem D. 73916.Palindromes
#include <iostream>
using namespace std;
int main (){
       string s;
       cin >> s;
       if ( s == string(s.rbegin(),s.rend())){
           cout <<"YES";
       }else{
           cout << "NO";
       }
}