#include<stdio.h>
int main() {
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Even numbers uto %d are:\n",n);
    for (i=1; i<=n; i++) {
        if (i%2==0) {
            printf("%d,",i);
        }
    }
    return 0;
}