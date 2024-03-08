#include <stdio.h>
#include<math.h>

int main()
 {
    // *
    // **
    // ***
    // ****
    // for(int i=1;i<=4;i++)
    // {
    //     for(int j = 1;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    // 1
    // 12
    // 123
    // 1234
    // for(int i=1;i<=4;i++)
    // {
    //     for(int j = 1;j<=i;j++){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }


    // 1
    // 22
    // 333
    // 4444
    // for(int i=1;i<=4;i++)
    // {
    //     for(int j = 1;j<=i;j++){
    //         printf("%d",i);
    //     }
    //     printf("\n");
    // }

    //    1
    //    2 3
    //    4 5 6
    //    7 8 9 10
    // int sum=0;
    // for(int i=1;i<=4;i++)
    // { 
    //     for(int j = 1;j<=i;j++){
    //         sum++;
    //         printf("%d ",sum);
    //     }
    //     printf("\n");
    // }

    //     1 
    //    2 3 
    //   4 5 6 
    //  7 8 9 10 
    // int sum=0;
    // for(int i=1;i<=4;i++)
    // { 
    //     for(int k=4-i;k>=0;k--){
    //         printf(" ");
    //     }
    //     for(int j = 1;j<=i;j++){
    //         sum++;
    //         printf("%d ",sum);
    //     }
    //     printf("\n");
    // }


    //    * 
    //   * * 
    //  * * * 
    // * * * *
    // for(int i=1;i<=4;i++)
    // { 
    //     for(int k=4-i;k>=0;k--){
    //         printf(" ");
    //     }
    //     for(int j = 1;j<=i;j++){
           
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // factorial
    // int su=1;
    // for (int i=1;i<=5;i++){
    //     su *=i;
    // }
    // printf("%d\n",su);

    // sum of n terms of even natural numbers.
    // int su=0;
    // for (int i=1;i<=5;i++){
    //     su +=(2*i);
    // }
    // printf("%d\n",su);

    //     1 
    //    2 2 
    //   3 3 3 
    //  4 4 4 4 
    // for(int i=1;i<=4;i++)
    // { 
    //     for(int k=4-i;k>=0;k--){
    //         printf(" ");
    //     }
    //     for(int j = 1;j<=i;j++){
            
    //         printf("%d ",i);
    //     }
    //     printf("\n");
    // }

    // Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].
    // where nth term = 5 and x=2
    //     int fact(int a){
    //     int su=1;
    //     for (int i=1;i<=a;i++){
    //         su *=i;
    //     }
    //     return su;
    // }
    // float sum =1;
    // for(int i =1;i<=5;i++)
    // {
    //     sum+=(pow(-1,i)*(pow(2,(2*i))/fact(2*i)*1.00));
    // }
    // printf("%f",sum);

    //      *
    //     ***
    //    *****
    // for(int i=0;i<=3;i++){
    //     for(int k=4-i;k>=0;k--)
    //     {
    //         printf(" ");
    //     }
    //     for(int j =1;j<=(2*i)-1;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
    // int sum =0;
    // for(int i =1;i<=5;i++){
    //     sum +=(pow(10,i)-1);
    // }
    // printf("%d \n",sum);

    //  Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
    // int r=0,sum=0;
    // for(int i =0;i<5;i++){
    //     sum += pow(10,i);
    //     r += sum;
    // }
    // printf("%d \n",r);


    //perfact nuber
    // int sum =0,no=28;
    // printf("the factors are: ");
    // for(int i=1;i<no;i++){
    //     if(no%i == 0){
    //         sum += i;
    //         printf("%d ,",i);
    //     }
    // }
    // if(sum == no){
    //     printf("\nthis is perfact no.\n");
    // }

    //Armstrong number
    // int rem=0,sum=0 ,x=153;
    // int fl=x;
    // while(x > 0){
    //     rem = x%10;
    //     sum += pow(rem,3);
    //     x /= 10; 
    // }
    // if(fl == sum){
    //     printf("armstrong\n");
    // }

    //     *
    //    *** 
    //   *****
    //  *******
    // ********* 
    //  *******
    //   *****
    //    ***
    //     * 
    // for(int i =1;i<=5;i++){
    //     for(int k=5-i;k>=0;k--){
    //         printf(" ");
    //     }
    //     for(int j =1;j<=(2*i)-1;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i =1;i < 5;i++){
    //     for(int k =1;k<=i+1;k++){
    //         printf(" ");
    //     }
    //     for(int j = (2*(5-i))-1;j>0;j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //prime no
    // int no =10,x=2,flg=0;
    // if(no%2 == 0){
    //     printf("not prime");
    // }
    // else{
    //     while(x!=no){
    //         if(no % x ==0)
    //         {
    //             flg++;
    //             break;
    //         }
    //         x++;
    //     }
    //     if(flg == 0){
    //         printf("prime");
    //     }
    //     else{
    //         printf("not prime")
    //     }
    //     printf("\n");
    // }

    //           A 
    //        A    A 
    //      A    B    A 
    //    A    C    C    A 
    //  A    D    F    D    A 
    //  int no_row,c=1,blk,i,j;
    // printf("Input number of rows: ");
    // scanf("%d",&no_row);
    // for(i=0;i<no_row;i++)
    // {
    //     for(blk=1;blk<=no_row-i;blk++)
    //     printf("  ");
    //     for(j=0;j<=i;j++)
    //     {
    //         if (j==0||i==0)
    //             c=1;
    //         else
    //            c=c*(i-j+1)/j;
    //         printf("%4c ",c+64);
    //     }
    //     printf("\n");
    // }

    // for(int i =0;i<5;i++){
    //   for(int j =5; j > i;j--){
    //     printf("%d",j);
    //   }
    //   printf("\n");
    // }



    // 543212345
    //  5432345
    //   54345
    //    545
    //     5
    // for(int i = 0;i<5;i++){
    //     for(int j = 0;j<i;j++){
    //         printf(" ");
    //     }
    //     for(int j=5;j >i;j--){
    //         printf("%d",j);
    //     }
    //     for(int j =2+i; j <= 5; j++){
    //         printf("%d",j);
    //     }


    //           * 
    //         * * * 
    //       * * * * * 
    //     * * * * * * * 
    //   * * * * * * * * * 
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5-i;j++){
    //         printf("  ");
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }


    // 1     1
    // 12    21
    // 123   321
    // 1234  4321
    // 12345 54321
    // 12345654321
    // for(int i =1 ;i<=6 ;i++ ){
    //     for(int j=1 ;j<=i;j++){
    //         printf("%d",j);
    //     }
    //     for(int j =1 ; j<=6-i;j++){
    //         printf(" ");
    //     }
    //     for(int c=i; c>=1; c--)
    //     {
    //         if(c==6){
    //             printf("");
    //         }
    //         else{

    //         printf("%d",c);
    //         }
    //     }

    //     printf("\n");
    // }



    //     printf("\n");
    // }


   
  int a=18;
  int c= a++ + ++a+a--+a++;
  printf("%d",c);







 
   return 0;
 }
