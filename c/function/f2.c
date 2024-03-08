#include <stdio.h>

// int ar(int*);
// int main()
//  {
//     int p[]={{1,2,3,4},{1,2,3,4},{1,2,3,4}};
//     ar(p);
 
//    return 0;
//  }
//  int ar(int *p){
//     for(int i=0;i<4-1;i++){
//         for(int j=0;j<4;j++){

//             printf("%d",(*(p+i)+j));
//         }

//         printf("\n");
//     }
//     return 0;
//  }



//recursion

int fab(int a,int b,int n,int i){
    if (n == i-1){
        return 0;
    }
    else{
        printf("%d ",a+b);
        int c=a+b;
        a=b;
        b=c;
        return fab(a,b,n,i+1);
    }
}
int main(){
    int n;
    printf("enter your n: ");
    scanf("%d",&n);
    printf("0 1 ");
    fab(0,1,n,1);
    printf("\n");
    return 0;

}


