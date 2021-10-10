#include<stdio.h>

int main(){

    char email[500];
    printf("Enter your email: ");
    scanf("%s",email);

    int temp = 0, C = 0, atTheRate = -1, dot = -1;

    for(int i=0;email[i]!='\0';i++){
        if((email[i] >= 'A' && email[i] <= 'Z')
           || (email[i]>='a' && email[i]<='z')
           || (email[i]>='0' && email[i]<='9')
           || (email[i]=='.' || email[i]=='-'  || email[i]=='_' || email[i]=='@')
              && (i!=0 && email[i+1]!='\0')){
            temp = 1;
        }
        else{
            temp = 0;
            break;
        }
        if(email[i]=='@'){
            C++;
            atTheRate = i;
        }
        if(email[i]=='.'){
            dot = i;
        }
    }

    if(temp && (dot - atTheRate) > 3 && C == 1){
        printf("The email is valid\n");
    }
    else{
        printf("The email is invalid\n");
    }
    return 0;

}
