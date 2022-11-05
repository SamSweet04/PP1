//From small to capital
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main (){
    
    char s[30];
    int i;
    cin >> s;
    for(i = 0;i <= strlen(s);++i){
        if (s[i]>=97 && s[i]<=122)
    {
        s[i]=s[i]-32;
    }
    }
    cout <<s;
}

