//Problem P. 74450. Positive number
#include <iostream>
#include <cmath>
using namespace std;
int Positive(int n){
    return abs(n);
}
int main(){
    int n;
    cin >> n;
    Positive(n);
    cout<< abs(n);
}
