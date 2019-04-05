#include <stdio.h>
#include <stdlib.h>
void mod(){
    int c,d;
    int multiply[3][3]={303,303,531,0,0,0,0,0,0};
    for (c = 0; c < 3; c++) {
      for (d = 0; d < 3; d++){
        multiply[c][d]=multiply[c][d]%26;
        printf("%d\t", multiply[c][d]);
      }
      printf("\n");
    }
}