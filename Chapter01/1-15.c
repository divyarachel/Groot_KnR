#include <stdio.h>
int tempr(float temp){
    float fahr;
    int lower,upper,step;
    lower=-17;upper=148;step=10;
    fahr=lower;
    
    printf("Celsius\tFahrenheit\n");
    while(temp<=upper){
        fahr=((9.0/5.0)*temp)+32;
        printf("%6.1f \t %3.0f \n",temp,fahr);
        temp=temp+step;
}
}
int main(){
    float temp;
    printf("enter temp in cel: ");
    scanf("%f",&temp);
    tempr(temp);
}