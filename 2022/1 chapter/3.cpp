#include <iostream>
using namespace std;
int main(){
    int n,i = 0;
    cin >> n;
    while(n!=0){
        cout << 4*i+3 << " ";
        i++;
        n--;
    }
}