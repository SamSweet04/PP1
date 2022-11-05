//Negative
#include <iostream>

using namespace std;
int main(){
     int n,m,count = 0;//переменные,счетчик
     cin >> n >> m;// введем интеджер
     int a [n][m]; //обьявляем массив
     for (int i = 0;i < n;i++){
         for (int j = 0;j < m;j++){
             cin >> a[i][j]; // после того как создаем цикл введем элементы массива
             if(a[i][j] < 0){ // если элемент  меньше 0
                 count++;//счетчику прибавляем единичку
             }
         }
     }
     cout << count; //выводим результат
}
