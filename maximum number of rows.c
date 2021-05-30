#include <stdio.h>
int main() {
    int num = 0;
    printf("Enter the maximum no. of rows for the pattern.\n");
    scanf("%d", &num);
    for (int i=1; i<=num; i++){
        for (int j=i; j<=i && j>0; j--){
            printf("01");
        }
        printf("\n");
    }
    return 0;
}