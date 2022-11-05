// #include <bits/stdc++.h>
// using namespace std;
// int mini(int a, int b, int c, int d){
//     int min = 1e9, arr[] = {a,b,c,d};
//     for(int  i = 0;i < 4;i++)
//         if(min > arr[i]) min = arr[i];
//         return min;
    
// }
//     int main(){
//         int a , b , c , d;
//         cin >> a >> b >> c >> d;
//         cout << mini(a,b,c,d);
//     }

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
int mina (int a, int b, int c, int d){

    return min(min(a, b), min(c, d));

}

int main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << mina(a, b, c, d);
    return 0;

}