#include <bits/stdc++.h>
using namespace std;

int main(){
    int day, month, year; cin >> day >> month >> year;
    if(month >= 1 && month <= 12){
        if(year < 1970 || year > 2035){
            cout << "NO";
            return 0;
        }
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if(day < 1 || day > 31){
                cout << "NO";
                return 0;
            }
        }else if(month == 2){
            if(day < 1 || day > 28){
                cout << "NO";
                return 0;
            }
        }else{
            if(day < 1 || day > 30){
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    else cout << "NO";
}