#include <stdio.h>
int main(){
    int c;
    /*how do u verify?I did CTRL+D..thus condition becomes 0..so False*/
    while((c=getchar())!=EOF)
        {putchar(c);}
    return 0;
}