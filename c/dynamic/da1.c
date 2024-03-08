#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
 {
    // int *d = (int *) malloc(sizeof(int));
    // *d = 20;
    // char *names= (char *) malloc (10 * sizeof(char));
    // names="Durga madahb nayak";

    // printf("dynamic int : %d",*d);
    // printf("\nthis is the of : %c",names[3]);
    // free(d);




    int no ,*n =(int *) malloc(10 * sizeof(int));
    printf("enter your no : ");
    scanf("%d",&no);

    for(int i =0 ;i<no;i++){
        scanf("%d",n+i);
    }
    // display your no.
    for(int i =0 ;i<no;i++){
        printf("\n%d",*(n+i));
    }
    int k = n[0];
    // lagrgest no 
    for(int i =0;i<no ;i++){
        if(k < *(n+i)){
            k =*(n+i);
        }
    }
    printf("\nans :%d",k);

   return 0;

 }