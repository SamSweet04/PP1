#include <bits/stdc++.h>
using namespace std;
int main(){
    char first[15], second[15];
    int player_1 = 0,player_2 = 0;
    for(int i = 0;i < 15;i++) cin >> first[i];
    for(int i = 0;i < 15;i++) cin >> second[i];
    
    for(int i = 0;i < 15;i++){
       if(first[i] == 'S'){
           if(second[i] == 'P') player_1++;
           if(second[i] == 'R') player_2++;        
       }
       if(first[i] == 'P'){
           if(second[i] == 'S') player_2++;
           if(second[i] == 'R') player_1++;
       }
       if(first[i] == 'R'){
           if(second[i] == 'S') player_1++;
           if(second[i] == 'P') player_2++;
       }
    }
    if(player_1 > player_2) cout << "First player wins!";
    else if(player_2 > player_1) cout << "Second player wins!";
    else cout << "Friendship";
}
