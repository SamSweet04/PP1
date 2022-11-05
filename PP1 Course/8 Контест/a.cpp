#include <iostream> 
using namespace std; 
int main (){ 
 string s; 
 getline (cin, s); 
 int cnt=0; 
 for (int i=0; i<s.size(); i++){ 
 if ((s[i]=='K' || s[i]=='k') && (s[i+1]=='B' || s[i+1]=='b') && (s[i+2]=='T' || s[i+2]=='t') && (s[i+3]=='U' || s[i+3]=='u')) cnt++; 
 } 
 cout << cnt; 
}