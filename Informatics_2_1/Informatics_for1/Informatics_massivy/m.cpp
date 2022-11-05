#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

//rubyypnh

using namespace std;


int main(){

    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int ans[n];
    a--;b--;c--;d--;
    for(int i = 0; i < n; i++){
        ans[i] = i + 1;
    }


    for(int i = a; i <= (a + b) / 2; i++){
        swap(ans[i], ans[b - i + a]);
    }

    for(int i = c; i <= (c + d) / 2; i++){
        swap(ans[i], ans[d - i + c]);
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

    return 0;

}