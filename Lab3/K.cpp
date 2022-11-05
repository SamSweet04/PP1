// Duplicates
//Given a sorted array, write a program which will delete all duplicates of elements and just save one of
//them.
//3
//1 1 4

//1 4
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n + 1]; // чтобы не выйти за пределы массива +1
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    a[n] = 1000000; // приравняем конец массива за пределы диапозана миллион чтобы вывести 6 
    //система не выведит милоион потому что он за пределы массива
    for(int i = 0;i < n; i++){ // 1 3 5 5 6         1 3 5 6
        if(a[i] == a[i + 1]){
            continue; // пропускаем текущее число
        }
        cout << a[i]<< " ";
    }
}