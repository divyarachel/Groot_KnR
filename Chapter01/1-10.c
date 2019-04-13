#include <stdio.h>
int main(){
    int c,n,w,t;n=0;w=0;t=0;
     while((c=getchar())!=EOF){
        if(c=='\b'){putchar(92);putchar(98);}/**idk what i did here..this was the question i felt weird to ask*/
        if(c=='\\'){putchar(92);putchar(92);}
        if(c=='\t'){putchar(92);putchar(116);}
        else putchar(c);
    }
    
    return 0;
}