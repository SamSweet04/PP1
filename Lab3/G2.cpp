#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int max =999999, min = 999999;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
  
    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
     for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
        
    }
    for(int i = 0; i < n; i++){
        if(a[i] == max){
            a[i] = min;
        }
        cout << a[i] << " ";
        
    }
}