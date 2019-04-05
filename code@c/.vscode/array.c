#include<stdio.h>
void main(){
    int i,j,ar[6]={1,2,3,4,5,6},a1[3][3];
    for (i=0;i<3;i++){
        for (j=0;j<i;j++){
            int l=0;
            a1[0][j]=ar[j+l];
            l=l+3;
    }printf("%d ",a1[i]);}
    }
    