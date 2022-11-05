#include <bits/stdc++.h>
using namespace std;

int main() {
char s[100], t[100];

while(cin.getline(s, 100) && cin.getline(t, 100)){
if (strcmp(s, t)!=1){
printf("Sad");
break;
}
else {
printf("Karakatyn");
}
}
return 0;
}