#include <stdio.h>
int main(){
    int c,state=0;
     while((c=getchar())!=EOF){
        if(c==' '||c=='\n'||c=='\t'){
            printf("\n");}
        if(c!=' ')putchar(c);
    }
    return 0;
}