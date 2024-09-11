#include<stdio.h>
int main() {
    int n,i,j;
    float fact=1,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            fact*=i;
        }
        sum=sum+i/fact;
    }
    printf("The required sum=%f",sum);
    return 0;
}