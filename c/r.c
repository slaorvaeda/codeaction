    #include <stdio.h>



    int main() {
        int n,sh,di,b;

        printf("Enter your no: ");
        scanf("%d", &n);
        printf("Enter the size of bit(always greater then 4): ");
        scanf("%d", &b);

        if (n == 0) {
            printf("binary: 0");
            
        }
        sh = 1 << b; 

        printf("binary is: ");

    
        while (sh > 0) {
            int di = (n & sh) ? 1 : 0;
            printf("%d", di);
            sh = sh >> 1; 
        }



        printf("\n");
        return 0;
    }
