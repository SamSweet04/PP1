#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long sum = 0;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << sum;
}
//Sum of array
//Given an array consisting of integers. Write a program, which finds sum of all elements.
//4
//2 7 3 3
//15