#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n >= 1 and n <= 12) cout << "Lark";
    if(n > 12 and n <= 24) cout << "Owl";
    if(n > 24)cout <<"Owl";
}