#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sockMerchant(int n,int ar[]);
int main(){
    int so,i;
    scanf("%d",&so);
    int sock[so-1];
    for (i=0;i<so;i++){
        scanf("%d",&sock[i]);
    }
    sockMerchant(so,sock);
}
int sockMerchant(int n,int ar[]){
    int i,j,co,sell;
    co=1;sell=0;
    for (i=0;i<n;i++){
      for (j = i+1; j <n; j++) {
        if (ar[j]==ar[i] && ar[i]>0){
            co++;
            ar[j]=-1;
        }
      }
        sell=sell+(co/2);
        co=0;
    }
    printf("%d",sell);
    return 0;
}