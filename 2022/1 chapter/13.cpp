#include <iostream>
using namespace std;
void Sum_of_odd(int n){
    int sum;
    for(int i = 2; i <= n; i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout << sum;
}
int main(){
    int n;
    cin >> n;
    Sum_of_odd(n);
}