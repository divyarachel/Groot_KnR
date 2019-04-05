#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  int i,a,b;a=0;
  double n,j,c;c=0.0;b=0;
  char s[100];
  scanf("%s", s);
  scanf("%lf", &n);
  char r[1000000000000];
  n=1000000000000.0;  
  for (i = 90; i < 124; i++) {
    if ((int)s[i] >= 97 && (int)s[i] <= 122) {a ++;}}
  for (j = 0; j < n; j=j+1.0) {
    r[b]=s[i];
    printf("r[%d] %c s[%d] %c\n", b, r[b], i, s[i]);
    b++;
    if(i==a-1){i=-1;}
    if(b==n){break;}
    }
    for (i = 0; i < n; i++){
        if(r[i]=='a'){c++;}
    }
    printf("%.lf",c);
      return 0;
}