#include <stdio.h>
int main()
 {
    for(int i=2;i<=8;i++){
        printf("\n\n Table set %d-------------------------------------------\n\n",i);
        for(int j=1;j<=10;j++){
           printf("%5d",i*j); 
        }
        printf("\n");
         for(int j=1;j<=10;j++){
           printf("%5d",j); 
        }
        printf("\n");
         for(int j=1;j<=10;j++){
           printf("%5d",i); 
        }
        printf("\n");
    }
 
   return 0;
 }