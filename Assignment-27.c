#include<stdio.h>
int main() {
    int num,i;
    int temp=0;
    printf("Enter a  positive integer: ");
    scanf("%d",&num);
    for(i=2; i<=num/2; i++) {
        if (num%i==0) {
            temp++;
            break;
        }
    }
    if (temp==0 && num!=1) {
        printf("%d is a prime number",num);
    }
    else {
        printf("%d is not a prime number",num);
    }
    return 0;
}