//2d array
#include <iostream>

using namespace std;
int main(){
     
     int n;
     cin>>n;
     int a[n][n]; // массив размером nxn
     for ( int i=0; i <n; i++){ //считать элементы массива 
          for( int j=0; j < n;j++){ //два раза 
               cin >> a[i][j];
          }
     }
     int max = a[0][0]; // чтобы найти мах приравниваем первый элемент
     for (int i=0;i < n;i++){ // снова проходимся
          for (int j=0;j<n;j++){
               if(a[i][j]>max){ // текущее число больше мах тогда находим новый мах
                              
                    max = a[i][j]; // приравниваем к текущему числу

               }
          }
     }
               
          cout << max;
     }