#include<stdio.h>

long long product(long long b1, long long b2)
{
    int i = 0, remainder = 0, sum[20];
    long long product = 0;

    while (b1 != 0 || b2 != 0)
    {
        sum[i++] = (b1 % 10 + b2 % 10 + remainder) % 2;
        remainder = (b1 % 10 + b2 % 10 + remainder) / 2;
        b1 = b1 / 10;
        b2 = b2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        product = product * 10 + sum[i--];
    return product;
}

int main(){
    int n;
    printf("1) Addition\n2) Multiplication");
    scanf("%d",&n);
    if(n == 1){
        long b1, b2;
        printf("Enter two binary numbers: ");
        scanf("%ld %ld", &b1, &b2);

        int i = 0, remainder = 0, sum[20];

        while (b1 != 0 || b2 != 0){
            sum[i++] = (b1 % 10 + b2 % 10 + remainder) % 2;
            remainder = (b1 % 10 + b2 % 10 + remainder) / 2;
            b1 = b1 / 10;
            b2 = b2 / 10;
        }
        if (remainder != 0)
            sum[i++] = remainder;
        --i;
        printf("The sum is: ");
        while (i >= 0)
            printf("%d", sum[i--]);
        printf("\n");
    }
    else if(n == 2){
        long long b1, b2, multiply = 0;
        printf("Enter two binary numbers: ");
        scanf("%lld %lld", &b1, &b2);
        int digit, factor = 1;

        while (b2 != 0){
            digit = b2 % 10;
            if (digit == 1){
                b1 = b1 * factor;
                multiply = product(b1, multiply);
            }
            else
                b1 = b1 * factor;
            b2 = b2 / 10;
            factor = 10;
        }
        printf("The product is: %lld\n", multiply);
    }
    return 0;
}
