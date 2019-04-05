#include <stdio.h> 
int main() 
{ 
   char str[20];
   int g,i;
   scanf("%d",&g);
   scanf("%s",str); 
   printf("%s\n", str);
   for (i=0;i<20;i++){
       printf("%c",str[i]);
   }
   return 0; 
} 