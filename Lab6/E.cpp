// Problem E. 74821. Hypotenuse
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double Hypothen(int a,int b)
{
    return sqrt(a * a + b * b);
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << setprecision(4)<<Hypothen(a,b);
}