#include <iostream> 
#include <string> 
using namespace std; 
void Ind(int a, int b){ 
 bool k=true; 
 string s; cin >> s; 
 if (a+b+1==s.size()){ 
 for (int i=0; i<s.size(); i++){ 
 if (s[a]=='-'){ 
 if (i!=0){ 
 if (s[i]>='0' && s[i]<='9') k=false; 
 } 
 } 
 } 
 } 
 if (k) cout <<"No"; 
 else cout << "Yes"; 
} 
int main(){ 
 int a, b; cin>>a>>b; 
 Ind(a,b); 
 return 0; 
}