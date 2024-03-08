#include <stdio.h>
int main()
 {
    int no ;
    printf("enter your no of lines : ");
    scanf("%d",&no);

    printf("____________________________________\n\n");
    for(int i =no ;i > 0;i--)
    {
        for(int j= 1; j <=i;j++){
            printf("%d",j);
        }
       
        for(int k = no-1;k >= i;k--){
            if(k == no-1){
                printf(" ");
            }
            else
                printf("  ");
        }
         for(int j= i; j > 0;j--){
            if(i == no && j==no){
                continue;
            }
            printf("%d",j);
        }

        
        printf("\n");
    }
 
   return 0;
 }