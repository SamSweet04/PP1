#include <iostream>
using namespace std;
int main(){
    double MileinKm =  1.60934;
    double Feetsinkm = 3280.84;
    cout << "Please enter how much km,you want to invert:" << endl;
    double km;
    cin >> km;
    cout << "Choose miles or feets:" << endl;
    string mode;
    cin >> mode;
    if(mode == "miles"){
        cout << km*MileinKm;
    }
    if(mode == "feets"){
        cout << Feetsinkm*km;
    }
}