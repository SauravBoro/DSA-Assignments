#include<stdio.h>
#include<stdlib.h>

int main(){
  
  int n, *arr;
  printf("Enter the size of array: ");
  scanf("%d",&n);

  arr = (int*)malloc(n*sizeof(int));

  printf("Enter the elements of the array: ");
  for(int i=0;i<n;i++){
    scanf("%d",arr+i);
  }

  int a, b;
  printf("Enter no. of rows and columns (n x m): ");
  scanf("%d %d", &a, &b);

  if(a*b != n){
    printf("2D matrix can't be formed");
  }
  else{
    int counter = 0;
    int arr2[a][b];
    for (int i = 0; i < a; i++){
      for (int j = 0; j < b; j++){
        arr2[i][j] = arr[counter];
        counter++; 
      }
    }

    for (int i = 0; i < a; i++){
      for (int j = 0; j < b; j++){
        printf("%d    ",arr2[i][j]);        
      }
      printf("\n");
    }
    
  }
  
  return 0;

}
