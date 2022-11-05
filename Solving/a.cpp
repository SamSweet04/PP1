// #include <bits/stdc++.h>
// using namespace std;
// int Power(int a, int b){
//     int prod = 1;
//     for(int i = 0; i < b;i++)
//     prod*=a;
//     return prod;
// }
// int main(){
//     int a, b;
//     cin >> a >> b;
//     cout << Power(a,b);
// }
// #include <bits/stdc++.h>
// using namespace std;
// bool Prime(int n){
//     if(n==1) return false;
//     for(int i = 2; i*i <= n;i++){
//         if(n % i == 0) 
//         return false;
//     }
//     return true;
// }
// int main(){
//     int n,cnt = 0;
//     cin >> n;
//     for(int i = 1; cnt < n;i++){
//     if(Prime(i))cnt++;
//     if(cnt == n) cout << i ;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// void Long_word(string s){
//     string t = ".";
//     while(cin >> s){
//       if(t == "."){
//       t == s;
//       }
//     if(s.size() > t.size()){
//       t = s;
//     }
// }
//    cout << t;
// }
// int main(){
//     string s;
//     Long_word(s);
// }

// #include <bits/stdc++.h>
// using namespace std;
// int Degree(int n, int m){
//     if(m==1) return n;
//     if(m==0) return 1;
//     return Degree(n,n/2)*Degree(n,n-n/2);
// }
// int main(){
//     int n,m;
//     cin >> n >> m;
//     cout <<Degree(n,m);
// }


#include <iostream> 
#include <vector>
#include <strstream> 
#include <string> 
using namespace std;
int main(){

vector<int> vec; 
cout << "Real size of array in vector: " << vec.capacity () << endl; 
for (int j = 0; j < 10; j++) 
{ 
    vec.push_back (10); 
} 
cout << "Real size of array in vector: " << vec.capacity () << endl; 
return 0;
}