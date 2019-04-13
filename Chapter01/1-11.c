#include <stdio.h>
#define IN 1
#define OUT 0
int main(){
    int c,nw,state;
    state=OUT;
    nw=0;
    while((c=getchar())!=EOF){
        if(c==' '||c=='\n'||c=='\t') state=OUT;
        else if(state==OUT){state=IN;nw++;}
    }
    printf("%d\n",nw);/** try input "we are the world.we are the children"..that's rite without space before or after fullstop*/
    return 0;
}