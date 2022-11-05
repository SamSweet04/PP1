//Problem G. 74715. Remove vowels
#include <iostream>
using namespace std;

void removeVowels(string s){
 
  for(int i = 0; i <s.size();i++){
    if(s[i] == 'a' || s[i] == 'A' || s[i] =='e' || s[i] == 'E' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u' ){
        continue; // игнорит букву,переходит на следующее условие;

    }
    else{
        cout << s[i];
    }
  }
}
int main (){
    string s;
    getline(cin,s);
    removeVowels(s);
}
