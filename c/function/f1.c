#include <stdio.h>
// int fun( *x, *y);
int sum(int *x,int *y);
int main()
 {
    int x=5,y=10;
    // fun(&x,&y);
    // printf("%d %d",*&x,*&y);
    int sume = sum(&x,&y);
    printf("%d ",sume);


   return 0;
 }
 int sum(int *x,int *y){
    int sum = *x+*y;
    return sum ;
 }
//  int fun(int *x, int *y){
//     int ctr =0;
//     ctr = *x;
//     *x = *y;
//     *y = ctr;


//  }