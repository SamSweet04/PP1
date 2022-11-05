#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n,m,a,b = 0;
    cin >>n;
    for (a=1;a<=n;a++){
        cin >> m;
        if (m%10 ==7){b++;
        }
    }
    cout << b <<endl;
    return 0;
}