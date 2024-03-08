#include <stdio.h>

int main() {
    
    
    int arr[30],n ;
    int lmc=0,smc=0;
    int sm,lg;

    printf("enter the size of arrya (more than 3) : ");
    scanf("%d",&n);
    printf("enter your aray: \n");
    for(int i = 0 ;i<n;i++){
        // printf("[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    sm = arr[0];
    lg = arr[0];


    for (int i = 1; i < n; i++) {
        if (arr[i] < sm) {
            sm = arr[i];
            smc=i;
        }
        if (arr[i] > lg) {
            lg = arr[i];
            lmc=i;
        }
    }

    for (int i = 0; i < n; i++) {
        if ((i > smc && i < lmc) || (i < smc && i > lmc)) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}
