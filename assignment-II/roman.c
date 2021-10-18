#include<stdio.h>
#include<string.h>

int romanNumbers(char roman){

    int toDecimal;

    switch(roman){
        case 'I': toDecimal = 1; break;
        case 'V': toDecimal = 5; break;
        case 'X': toDecimal = 10; break;
        case 'L': toDecimal = 50; break;
        case 'C': toDecimal = 100; break;
        case 'D': toDecimal = 500; break;
        case 'M': toDecimal = 1000; break;
        case '\0': toDecimal = 0; break;
        default: toDecimal = -1;
    }
    return toDecimal;
}

long long toDecimal(char roman[]){
    int i = 0;
    long long number = 0;
    while (roman[i]){
        if(romanNumbers(roman[i]) < 0){
            return -1;
        }

        if((strlen(roman)-i)>2){
            if(romanNumbers(roman[i]) < romanNumbers(roman[i + 2])){
                return -1;
            }
        }

        if(romanNumbers(roman[i]) >= romanNumbers(roman[i + 1])){
            number += romanNumbers(roman[i]);
        } else {
            number += romanNumbers(roman[i + 1]) - romanNumbers(roman[i]);
            i++;
        }
        i++;
    }
    return number;
}

int toRoman(long long num){
    if(num <= 0){
        return -1;
    }
    while(num != 0){

        if (num >= 1000) {
            printf("M");
            num -= 1000;
        }

        else if (num >= 900){
            printf("CM");
            num -= 900;
        }

        else if (num >= 500){
            printf("D");
            num -= 500;
        }

        else if (num >= 400){
            printf("CD");
            num -= 400;
        }

        else if (num >= 100){
            printf("C");
            num -= 100;
        }

        else if (num >= 90){
            printf("XC");
            num -= 90;
        }

        else if (num >= 50){
            printf("L");
            num -= 50;
        }

        else if (num >= 40){
            printf("XL");
            num -= 40;
        }

        else if (num >= 10){
            printf("X");
            num -= 10;
        }

        else if (num >= 9){
            printf("IX");
            num -= 9;
        }

        else if (num >= 5){
            printf("V");
            num -= 5;
        }

        else if (num >= 4){
            printf("IV");
            num -= 4;
        }

        else if (num >= 1){
            printf("I");
            num -= 1;
        }

    }
    return 1;
}

int main(){
    int n;
    printf("1) addition\n2) multiplication\n");
    scanf("%d",&n);
    if(n == 1){
        char roman1[1000], roman2[1000];
        printf("Enter two roman numbers: ");
        scanf("%s %s", roman1, roman2);
        long long decimal1 = toDecimal(roman1);
        long long decimal2 = toDecimal(roman2);
        if(decimal1 == -1 || decimal2 == -1){
            printf("invalid\n");
        }
        else {
            long long sum = decimal1 + decimal2;
            printf("The sum is: ");
            toRoman(sum);
            printf("\n");
        }
    }
    else if(n == 2){
        char roman_num[1000], roman_num2[1000];
        printf("Enter two roman numbers: ");
        scanf("%s %s",roman_num, roman_num2);
        long long decimal1 = toDecimal(roman_num);
        long long decimal2 = toDecimal(roman_num2);
        if(decimal1 == -1 || decimal2 == -1){
            printf("invalid");
        }
        else{
            long long product = decimal1 * decimal2;
            printf("The product is: ");
            toRoman(product);
            printf("\n");
        }
    }
    return 0;
}
