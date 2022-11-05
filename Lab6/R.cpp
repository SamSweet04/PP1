//Problem R. 74447. ToUpper
#include <iostream>
#include <cctype>
// using namespace std;
// void ToUpper(string a){
//     for(int i = 0;i< a.size();i++){
//         if(a[i]>='a' and a[i]<='z'){

//         cout<<(char) toupper(a[i]);
//         }
//         else {
//             cout<<a[i];
//         }
//     }
// }
// int main(){
//     string s;
//     cin >>s;
//     ToUpper(s);

// }

using namespace std;

char upper(char a){
    if(a >= 'a' and a <= 'z') return a - ' ';
    else return a;
}

int main(){
    char a; cin >> a;
    cout << upper(a);
}