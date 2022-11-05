//Problem E. Awesome quiz
#include <iostream>
using namespace std;
int main(){
      string s;
      cin >> s;
      int a[10];
      for(int i =0;i < 10;i ++){
          a[i] = 0;
      }
      for(int i = 0; i < s.size(); i++){
          a[s[i] - '0']++;
      }
      for(int i = 0; i < 10; i++){
          cout << i << ": " << a[i] << endl;
          return 0;
      }
}













// #include <string>
// #include <algorithm>
// #include <vector>
// #include <map>
// #include <set>
// using namespace std;
// int main(){
//     map <char, int> m;
//     string s;
//     cin >> s;
//     for(auto i : s){
//         m[i]++;
//     }
//     for(auto i : m){
//         cout << i.first << ": " << i.second << endl;
//     }
//     return 0;
// }