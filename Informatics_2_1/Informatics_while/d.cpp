#include <bits/stdc++.h>
using namespace std;
int main(){

int n;
cin >> n;
if (n <= 0)
{
    cout << "NO";
    return 0;
}
while (n % 2==0)
{
n = n / 2;
}
if ( n == 1)
    cout << "YES";
else
    cout << "NO";
}