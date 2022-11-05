//The second
#include <iostream>

using namespace std;
int main(){
     
     int n;
     cin>>n;
     int a[n][n]; 
     for ( int i = 0; i< n; i++){
          for( int j = 0; j < n;j++){ 
               cin >> a[i][j]; // вводим наши элементы массива
          }
     }
     int max = a[0][0],max2 = a[0][0]; // задаем начальный элементы как максимум
    
     for ( int i = 0; i< n; i++){ 
          for( int j = 0; j < n; j++){ 
              if (a[i][j] > max){
                  max = a[i][j]; // находим первый мах
              }
          }
           for(int i=0;i < n;i++){
            for(int j = 0; j < n;j++){
                if (a[i][j] > max2 && a[i][j] < max){ // условие:если элемент больше чем мах2
              //и при и этом меньше чем мах
                    max2 = a[i][j]; // тогда мах2 берет это значение
                }
            }
           
        }
        if ( max == max2){ // если наш мах будет равен мах2 тогда 0
            cout << 0;
        }else {
            cout << max2; // в другом случае выводи мах2
        }
          
     
    
       cout << max2; // выводи максимум 2 в любом случае
     }}
