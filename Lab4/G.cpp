//Dots or number
#include <iostream>

using namespace std;
int main(){
    int n,num = 1;//переменные
     cin >> n;// введем интеджер
     int a [n][n]; //обьявляем массив
     for (int i = 0;i < n;i++){
         for (int j = 0; j < n;j++){
             if (j== n - num){
                 cout << num;
             } else {
            cout << ".";
             }
         }
         cout << endl;
         num ++;
     }
}

/*
n = 4
num = 1
i = 0
j = 0 
       j =1  1 = 4 - 1  j = 2  2 = 4 - 1  j = 3  3 = 4 - 1
0 = 4-1

...1
*/