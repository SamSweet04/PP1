//Position of maximum
#include <iostream>

using namespace std;
int main(){
    int n,pos_row=1,pos_col = 1;//переменные ряд,число i,столбец число j
     cin >> n;// введем интеджер
     int a[n+1][n+1];//мы должны увелечить 
     //размер массива на единичку чтобы он нормально 
     //мог считывать последний элемент
     for (int i = 1;i <= n;i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
     }
     int max = a[1][1];
     for (int i = 1; i <= n; i++){
         for(int j = 1;j <= n;j++){
             if(a[i][j]>max){
                 max = a[i][j];
                 pos_row = i;
                 pos_col = j;
             }
         }
     }
     cout << pos_row << " " << pos_col;
}

// 1 2 3 4 5

// [] [1] [2] [3] [4] [4535435] чтобы вот такого не было мы увеличиваем на единичку 