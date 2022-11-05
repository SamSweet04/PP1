//Array Modes
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,max = -100000;
    cin >> n;
    int a[n], cnt[100000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++; // колличсетво элементов
        if(max < cnt[a[i]]){
             max = cnt[a[i]];  //максимальное колличество сохраняем
        }
}
   
    sort (a , a + n);// сортируем
        for(int i = n - 1; i >= 0; i--){  //по убыванию
            if(cnt[a[i]] == max) // если там максимамльное колличество данного числа
            {
                cout << a[i]<< " "; // выводим это число
                cnt[a[i]] = 0; // обнлуляем счетчик
            }
       }   
}