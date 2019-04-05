#include <stdio.h>
 
int multiply(int a1[3][3])
{
  int  p, q, c, d, k, sum = 0;
  int multiply[3][3];
   printf("Enter elements of first matrix\n");
  
    int key[3][3]={1,2,3,4,5,6,7,8,9};
 
    for (c = 0; c < 3; c++) {
      for (d = 0; d < 3; d++) {
        for (k = 0; k < 3; k++) {
          sum = sum + a1[c][k]*key[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < 3; c++) {
      for (d = 0; d < 3; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }

 
  return multiply[3][3];}