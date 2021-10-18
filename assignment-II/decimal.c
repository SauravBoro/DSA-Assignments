#include<stdio.h>

int main(){
    int n;
    long n1, n2;
    printf("1)Addition\n2)multiplication\n");
    scanf("%d",&n);
    if(n == 1){
        printf("Enter the two decimal numbers: ");
        scanf("%ld %ld", &n1, &n2);
        long long sum = n1 + n2;
        printf("The sum is: %lld\n", sum);
    }
    else if(n == 2){
        printf("Enter the two decimal numbers: ");
        scanf("%ld %ld", &n1, &n2);
        long long product = n1 * n2;
        printf("The product is: %lld\n", product);
    }
    return 0;
}
