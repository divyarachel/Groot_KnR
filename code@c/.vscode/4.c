#include <stdio.h>
int main(){
    float fahr,cels;
    int lower,upper,step;
    lower=-17;upper=148;step=10;
    fahr=lower;
    /*the heading thing*/
    printf("Celsius\tFahrenheit\n");
    while(cels<=upper){
        fahr=((9.0/5.0)*cels)+32;
        printf("%6.1f \t %3.0f \n",cels,fahr);
        cels=cels+step;
    }
}