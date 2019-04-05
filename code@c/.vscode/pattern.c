#include <stdio.h>
void main(){
    int n,i,j;
    printf("Enter n(odd):");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=n;j++)
        {
            if (j==(n+1)/2 && (i!=1 && i!=n)){printf("   ");continue;}/*for all 5*/
            if((i==(n+1)/2) && (j!=1 && j!=n)){printf("   ");continue;}/*for middle row*/
            if((i==3 || i==(n-2)) && (j==((n+1)/2)+1 || j==((n+1)/2)-1)){printf("   ");continue;}
            if((i==4 || i==(n-3)) && (j==((n+1)/2)+1 || j==((n+1)/2)-1 || j==((n+1)/2)+2 || j==((n+1)/2)-2)){printf("   ");continue;}
            printf(" * ");    
        }printf("\n");
    }
}