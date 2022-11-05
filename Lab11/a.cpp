#include <iostream>
using namespace std;
int main(){
    int cnt = 0,b=1;
    while(b <= 400){
        if (b%100== 0 and b%5==0 and b%7!=0) {cnt++;
        }
        b++;
    }
    cout << cnt;
}