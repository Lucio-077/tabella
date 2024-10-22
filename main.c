#include <stdio.h>

int main(void) {
    int i,max_numero=12,n;
    printf("     ");
    for(i=1; i <= 12; i++) {
        printf("%4d ",i);
    }
    printf("\n");
    printf("     ");
    for (i = 1; i <= 12;i++) {
        printf("------");
            }
    printf("\n");
    for(i = 1; i <= 12; i++){
        printf("%4d|",i);
        for (n = 1; n <= 12; n++) {
            printf("%4d",i);
            if (n < 12)
                printf(" |");
        }
        printf("\n");
        printf ("   -");
        for (n = 1; n <= 12; n++) {
            printf("------");
        }
        printf("\n");
    }
}
