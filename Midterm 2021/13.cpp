#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,f;
    cin >> n >> f;
    bool fuck = true;
    for(int i = 2; i < sqrt(n); i++){
    if(n % i == 0){
    fuck = false;
    break;
}
}
if(fuck == true and n <= 500 and f % 2 == 0){
cout<<"Good job!";
} 
else{
cout<<"Try next time!";
}
}