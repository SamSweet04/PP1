//Четные и Нечетные ряды
#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0) cout << 0 << " ";
            else if(i % 2 != 0) cout << 1 << " ";
            else if(i % 2 == 0) cout << 2 << " ";
        }
        cout << "\n";
    }
}