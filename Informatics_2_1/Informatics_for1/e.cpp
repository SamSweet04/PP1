#include <bits/stdc++.h>
using namespace std;
int main (){
    int x,sum=0;
    cin >> x;
     while(x!=0){
        sum+=x%10;
        x/=10;

    }
        cout << sum;
return 0;
}
