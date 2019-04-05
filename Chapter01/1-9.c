#include <stdio.h>
int main(){
    int c,w;w=0;
     while((c=getchar())!=EOF){
         if(c==' '){
             if(w==0){
                 w=1;
                 putchar(c);
             }
         }
         if(c!=' '){
             w=0;
             putchar(c);
         }            
     }return 0;
}