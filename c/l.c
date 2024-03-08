#include <stdio.h>


int main() {
    int n,i=0;
    int arr[20];

    printf("Enter your number: ");
    scanf("%d", &n);
     if (n == 0) {
        printf("binary is: 0");
       
    }
    else{
        while (n > 0) {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("binary is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }

    }


    printf("\n");
    return 0;
}
