#include <stdio.h>
int main(){
    int c,n,w,t;n=0;w=0;t=0;
     while((c=getchar())!=EOF){
        if(c=='\n'){++n;}
        if(c==' '){++w;}
        if(c=='\t'){++t;}
    }
    printf("\nNew lines %d",n);
    printf("\nWhite spaces %d",w);
    printf("\nTabs %d",t);
    return 0;
}