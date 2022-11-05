#include <iostream>
using namespace std;
int x(int x, int y){
return (x^(y^(x + y)));
}

    int main() {
    int n, m;
    cin >> n >> m;
    cout << x(n, m) << endl;
    return 0;
    }