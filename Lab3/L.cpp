#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){   //4 5 6 7 10
        cin >> a[i];               // 2 4 7 8 
    }                               
    cin >> m;
    int b[m];                      // 4   5   6   7  10 
    for(int i = 0; i < m; i++){    //[0] [1] [2] [3] [4] [5] [6] [7] [8] [9]
        cin >> b[i];
    }
    int c[n + m];
    for(int i = 0; i < n; i++){
        c[i] = a[i];
    }
    int k = 0; // завели тут счетчтик потому что отсет должен начинаться уже на 5 индексе
    for(int i = n; i < n + m; i++){
        c[i] = b[k];
        k++;
    }
    sort(c, c + n + m); //сам массив и размер массива
    for(int i = 0; i < n + m; i++){
        cout << c[i] << " ";
    }
}