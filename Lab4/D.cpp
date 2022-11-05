//Multiplication table
#include <iostream>

using namespace std;
int main(){
    int n;//переменные
     cin >> n;// введем интеджер
     int a [n][n]; //обьявляем массив
     for (int i = 0;i < n;i++){
         a[0][i] = i;// row with numbers n-1
     }
     for(int i = 0;i < n; i++){
         a [i][0] = i; // column with nubers n-1
     }
     for (int i = 0; i < n; i++){
         for(int j = 0; j < n; j++){
             if(i !=0 && j !=0){ // или-->один из них правда а тут "и"
                 a[i][j] = i*j; // заполняем массив
             }
             cout << a[i][j] <<" ";
         }
         cout <<endl;
     }
}