#include<stdio.h>

int main(){

  char email[500];
  printf("Enter email to check whether valid or not: ");
  scanf("%s",email);

  int flag = 0, atCounter = 0, indexOfAt = -1, indexOfDot = -1;

  int i=0;

  while(email[i]!='\0'){
    if((email[i] >= 'A' && email[i] <= 'Z') 
        || (email[i]>='a' && email[i]<='z') 
        || (email[i]>='0' && email[i]<='9') 
        || (email[i]=='.' || email[i]=='-'  || email[i]=='_' || email[i]=='@') 
        && (i!=0 && email[i+1]!='\0')){
      flag = 1;
    }
    else{
      flag = 0;
      break;
    }
    if(email[i]=='@'){
      atCounter++;
      indexOfAt = i;
    } 
    if(email[i]=='.'){
      indexOfDot = i;
    }
    i++;
  }

  if(flag && (indexOfDot - indexOfAt)>3 && atCounter==1){
    printf("The email is valid\n");
  } 
  else{
    printf("The email is not valid\n");
  }

  return 0;

}
