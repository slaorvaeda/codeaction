#include <stdio.h>
// int fact(int);
// void palendrom(int );
// int gratest(int ,int );
// int gcd(int ,int);
// int euclidgcd(int,int);
// void swap(int *,int *);


int main()
 {
    int n,o;
    printf("enter your nuber n: ");
    scanf("%d",&n);
     printf("enter your nuber o: ");
    scanf("%d",&o);
    // int facto = fact(n);
    // printf("factorial of %d no is = %d",n,facto);
    // palendrom(n);
    // printf("the gratest is %d",gratest(n,o));
    // printf("gcd of %d and %d is %d ",n,o,gcd(n,o) );
   //  printf("gcd of %d and %d is %d ",n,o,euclidgcd(n,o) );
   
   // swap(&n,&o);
   // printf("%d %d",n,o);


    printf("\n");
   return 0;
 }
 
// void swap(int *a,int *b){
//    int c = *a;
//    *a=*b;
//    *b=c;

// }

//  int euclidgcd(int a,int b){
//     while(b > 0){
//         int r =a%b;
//         a=b;
//         b=r;
//     }
//     return a;

//  }
//  int gcd(int a,int b){
//     int ret =0;
//     for(int i =0;i <= a && i<= b;i++){
//         if(a%i == 0 && b%i ==0){
//             ret = i;
//         }

//     }
//     return ret;
//  }

//  int gratest(int a,int b){
//     return ((a > b) ? a: b);

//  }

// void palendrom(int n){
//     int temp = n,sum =0 ,rev =0 ;
//     while (n!= 0){
//         rev = n%10;
//         sum =sum*10+rev;
//         n = n/10;
//     }
//     if(temp == sum){
//         printf("this is palendrom");
//     }
//     else{
//         printf("not a palendrom");
//     }
//     printf("\n");

// }

//  int fact(int n){
//     int facto = 1;
//     for(int i= 1;i<=n;i++)
//     {
//         facto *=i;
//     }
//     return facto;
//  }

