//Последовательность-1
#include <iostream>
using namespace std;

int main(){
    int cnt = 0;
    int a[1000];

    while(true){
        int x;
        cin >> x;
        if(x == -1)break;
        a[cnt] = x;
        cnt++;
    }
    cout << cnt << "\n";
    for(int i = 0;i < cnt;i++)
    cout << a[i] <<" ";
    }