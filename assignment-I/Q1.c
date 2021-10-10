#include<stdio.h>

int main(){

  char NUM[20];
  int flag = 0;
  int floatingPoint = 0;

  printf("Enter a NUM: ");
  scanf("%s", NUM);

  

  for(int i=0;NUM[i] != '\0';i++){
    if(!flag && NUM[i] == '.'){
      flag = 1;
    }
    else if(flag && (NUM[i] < '0' && NUM[i] > '9')){
      floatingPoint = 0;
    }
    else if(flag && (NUM[i] >= '0' && NUM[i] <= '9')){
      floatingPoint = 1;
    }
  }

  if(floatingPoint){
    printf("Then NUM %s is a valid floating point.\n", NUM);
  }
  else{
    printf("The NUM %s is not a valid floating point.\n", NUM);
  }

  return 0;

}
