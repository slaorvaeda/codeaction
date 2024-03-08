    #include <stdio.h>

    int main() {
        int tr, innp, nout, wickets;
        double averageRun;

        printf("Enter total number of runs scored: ");
        scanf("%d", &tr);

        printf("Enter number of innings played: ");
        scanf("%d", &innp);

        printf("Enter number of not outs: ");
        scanf("%d", &nout);

        printf("Enter number of wickets taken: ");
        scanf("%d", &wickets);

        if (innp - nout > 0) {
            averageRun = (double)tr / (innp - nout);
        } else {
            printf("Invalid input\n");
            return 1; 
        }

        printf("Average run: %.2f\n", averageRun);

        if (averageRun >= 50) {
            printf("Cricketer is a good batter.\n");
        } else {
            printf("Cricketer needs improvement as a batter.\n");
        }

        return 0;
    }
