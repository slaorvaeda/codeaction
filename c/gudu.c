#include <stdio.h>
#include<stdlib.h>
// int fun(int,int);
 //datatype function_name(argument){}
void fun (int a1){ //<- receve value of x //20
 
 for(int n=2 ; n <= a1;n++){ //3
    int i=1,count =0;
     
     while(i<=n){
    if(n%i == 0){
        count ++; 
    }
    i++; 
 }
   if(count == 2){
     printf("%d,",n);
   }
 }

}
int main()
 {
    int *a;
     a = (int *) malloc (sizeof(int));

    printf("enter your  no: ");
    scanf("%d",&a);
    //<- pass by value
    //call
   fun(a);
   

    printf("\n");
   return 0;
 }

