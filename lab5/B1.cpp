//From small to capital
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>

#include <sstream>

using namespace std;
int main (){
    
   string s;
   cin >> s;
   for (size_t i = 0;i < s.size();i++){
    s[i] = toupper(s[i]);
    
   }
     cout << s <<endl;
}