#include <stdio.h>
#include <string.h>

void fibonacci(int N) {
    char a[5000]="0",b[5000]="1",result[5000];
    int l1,l2,diff,i,j,k,carry = 0,sum;
    if(N <= 1) {
        printf("%d",N);
        return;
    }
    for(j = 2; j <= N; ++j) {
        l1 = strlen(a);
        l2 = strlen(b);
        diff = l2 - l1;
        k = l2 - 1;
        result[l2] = '\0';
        for(i = l1 - 1; i >= 0; --i, --k) {
            sum = (a[i] - 48) + (b[i + diff] - 48) + carry;
            result[k] = (sum % 10) + 48;
            carry = sum/10;
        }
        for(i = l2 - l1 - 1; i >= 0; --i,--k) {
            sum = (b[i] - 48) + carry;
            result[k] = (sum % 10) + 48;
            carry = sum/ 10;
        }
        if(carry > 0) {
            for(i = strlen(result); i >= 0; --i) {
                result[i + 1] = result[i];
            }
            result[0] = carry + 48;
            carry = 0;
        }
        for (i = 0; i <= strlen(result); ++i) {
            a[i] = b[i];
            b[i] = result[i];
        }
    }
    printf("%s",result);
}

int main() {
    int N;
    scanf("%d",&N);
    fibonacci(N);
    return 0;
}
