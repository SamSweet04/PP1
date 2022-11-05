#include <iostream>
using namespace std;
int main(){
    int n, index;   //Position of maximum
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int max = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
            index = i;
        }
    }
    cout << index + 1;
}

//Given an array consisting of integers. Write a program, which finds position of maximum element of array.
//If maximums is two or more you should output first position.
//input:4
//2 7 3 3
//output:2