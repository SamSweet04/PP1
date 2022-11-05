#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char x;
    cin >> n >> x;
    for(int i = 0; i < n;i++){
       string str = to_string(i);
       for(int j = 0;j < str.size();j++){
           if(str[j] == x){
               cout << str << " ";
               break;
           }
       }
    }

}
