#include <stdio.h>
#include <string.h>
// int num(int n,int i){
//     if(i == n+1){
//         return 0;

//     }
//     else{
//         printf("%d ",i);
//         return num(n,i+1);
//     }
// }
// int nsum(int n,int sum){
//     int sum;
//     if(n+1==sum){
//         return 0;
//     }
//     else{
        
//         sum =sum+nsum(n,sum+1);
//         return sum;
       
//     }

// }
//or 

// int nsum2(int n1){
  
//    int res;
//    if (n1 == 1) 
//    {
//       return (1);
//    } else 
//    {
//       res = n1 + nsum2(n1 - 1); 
//    }
//    return (res);
// }

// int fab(int a,int b,int n,int i){
//     if (n == i+1){
//         return 0;
//     }
//     else{
//         printf("%d ",a+b);
//         int c=a+b;
//         a=b;
//         b=c;
//         return fab(a,b,n,i+1);
//     }
// }


// int arfun(int *p,int s,int i){
//      if(s == i){
//         return 0;

//     }
//     else{
//         printf("%d ",*(p+i));
//         return (arfun((p),s,i+1));
//     }
// }


// int dign(int n){
//      static int i=0;
//     if(n == 0){
//         return i;
//     }
//     else{
//         i= i+1;
//         return dign(n/10);

//     }
    
// }

// int digsum(int n){ 
//     if(n == 0){
//         return 0;
//     }
//      return (n % 10) + digsum(n / 10);
// }

int main()
 {
    // int n=5,i=1;
    // num(n,i);

    // int n=5,sum=0;
    // int op =nsum(n,sum);
    //or
    // int op =nsum2(n);
    // printf("%d",op);

    // int n;
    // printf("enter your n: ");
    // scanf("%d",&n);
    // printf("0 1 ");
    // fab(0,1,n,1);

    // int arr[] ={1,2,3,4,5};
    // arfun(arr,sizeof(arr)/sizeof(arr[0]),0);

    // int n=331;
    // printf("%d", digsum(n));

    

 
   return 0;
 }