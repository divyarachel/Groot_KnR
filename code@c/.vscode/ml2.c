#include <stdio.h>
int main()
{
  int  p, q, c, d, k, sum = 0;
  int a2[3][3]={1,2,3,4,5,6,7,8,9};
  int multi[3][3];
    int key[3][3]={1,0,0,0,1,0,0,0,1};
 
     for (c = 0; c < 3; c++) {
      for (d = 0; d < 3; d++) {
        for (k = 0; k < 3; k++) {
          sum = sum + a2[c][k]*key[k][d];
        }
 
        multi[c][d] = sum;
        sum = 0;
      }
    }
    printf("Product of the matrices:\n");
 
    for (c = 0; c < 3; c++) {
      for (d = 0; d < 3; d++)
        printf("%d\t", multi[c][d]);
 
      printf("\n");}
  return 0;
  }
