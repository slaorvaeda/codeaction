#include <stdio.h>
int main() {
    int n,bit,divisor = 1,leadingZeros = 1;
  

    printf("Enter a decimal number: ");
    scanf("%d", &n);

     if (n == 0) {
        printf("Binary: 0");
        
    }
    else{
        while ((n / divisor) > 1) {
        divisor *= 2;
        leadingZeros++;
    }

    printf("Binary: ");
    for (int i = 0; i < leadingZeros; i++) {
        bit = (n / divisor) % 2;
        printf("%d", bit);
        divisor /= 2;
    }

    }
    

    return 0;
}
