#include <stdio.h>
int main()
 {
    int arr[30],n,i,j,temp=0;

    printf("enter your size of array :");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        // printf("[%d]:",i);
        scanf("%d",&arr[i]);
    }

     for(i=0;i<n;i++)
    {
     for(j=0;j<(n-i-1);j++)
    {
      if(arr[j]>arr[j+1])
     {
        temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
      }
     }
    }

    for(i=0;i<n;i++){
        for(j=0;j<arr[i];j++){
            printf("%d",arr[i]);
            
        }
        printf("\n");
    }


 
   return 0;
 }