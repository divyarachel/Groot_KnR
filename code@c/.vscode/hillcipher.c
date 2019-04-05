#include <stdio.h>
#include <stdlib.h>
int alpha(char py[27],int a[27]);
int * multiply(int a2[3][3]);
/**void mod(int multi[3][3]);**/
void main(){
    char pt[3];
    int matr[3];
    int a1[3][3]={0,0,0,0,0,0,0,0,0};
    int i,j;
    printf("Enter the plaintext with letters(max 3 letters at once) : ");
    scanf("%[^\n]", &pt);
    alpha(pt,matr);
    for (i=0;i<3;i++){
        a1[0][i]=matr[i];}
    for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++)
        printf("%d\t", a1[i][j]);
 
      printf("\n");
    }
    int * a3;
    a3=multiply(a1);
    
    printf("Product of the matrices:\n");
 
    for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++)
        {printf("%d\t", a3[i][j]);}
 
      printf("\n");
    }



    printf("\n Coded as : ");
    for (i=0;i<3;i++){
        printf("%d ",a1[0][i]);
    }
    return 0;}
int alpha(char py[3],int a[3]){
    int i;
    for(i=0;i<3;i++){
        if (py[i]=='a'){a[i]=0;}
        if (py[i]=='b'){a[i]=1;}
        if (py[i]=='c'){a[i]=2;}
        if (py[i]=='d'){a[i]=3;}
        if (py[i]=='e'){a[i]=4;}
        if (py[i]=='f'){a[i]=5;}
        if (py[i]=='g'){a[i]=6;}
        if (py[i]=='h'){a[i]=7;}
        if (py[i]=='i'){a[i]=8;}
        if (py[i]=='j'){a[i]=9;}
        if (py[i]=='k'){a[i]=10;}
        if (py[i]=='l'){a[i]=11;}
        if (py[i]=='m'){a[i]=12;}
        if (py[i]=='n'){a[i]=13;}
        if (py[i]=='o'){a[i]=14;}
        if (py[i]=='p'){a[i]=15;}
        if (py[i]=='q'){a[i]=16;}
        if (py[i]=='r'){a[i]=17;}
        if (py[i]=='s'){a[i]=18;}
        if (py[i]=='t'){a[i]=19;}
        if (py[i]=='u'){a[i]=20;}
        if (py[i]=='v'){a[i]=21;}
        if (py[i]=='w'){a[i]=22;}
        if (py[i]=='x'){a[i]=23;}
        if (py[i]=='y'){a[i]=24;}
        if (py[i]=='z'){a[i]=25;}
    } return a;   
}
int * multiply(int a2[3][3])
{
  int  p, q, c, d, k, sum = 0;
  int multi[3][3];
    int key[3][3]={17,17,5,21,18,21,2,2,19};
 
    for (c = 0; c < 3; c++) {
      for (d = 0; d < 3; d++) {
        for (k = 0; k < 3; k++) {
          sum = sum + a2[c][k]*key[k][d];
        }multi[c][d] = sum;
        sum = 0;
      }
    }    
  return multi;
  }