#include <stdio.h>
#include <stdlib.h>
void alpha(char py[27]){
    int a[27],i;
    for(i=0;i<27;i++){
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
    } return a[27];   
}