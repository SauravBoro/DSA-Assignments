#include<stdio.h>

int main(){

    char email[500];
    printf("Enter your email: ");
    scanf("%s",email);

    int temp = 0, atCounter = 0, indexOfAt = -1, indexOfDot = -1;

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
            atCounter++;
            indexOfAt = i;
        }
        if(email[i]=='.'){
            indexOfDot = i;
        }
    }

    if(temp && (indexOfDot - indexOfAt) > 3 && atCounter == 1){
        printf("The email is valid\n");
    }
    else{
        printf("The email is not valid\n");
    }
    return 0;

}
