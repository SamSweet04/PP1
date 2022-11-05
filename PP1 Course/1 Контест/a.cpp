//Сумма и произведение
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum, prod,x,digit;
    while(n--){
        cin >> x;
        sum = 0; prod = 1;
        while(x){
            digit = x % 10;
            prod *= digit;
            sum += digit;
            x /= 10;
        }
        cout << sum <<" "<<prod <<"\n";
    }
}