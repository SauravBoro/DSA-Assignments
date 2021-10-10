#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *arr;
    printf("Size of array: ");
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    printf("Elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a, b;
    printf("Enter the number of rows and columns respectively: ");
    scanf("%d %d", &a, &b);
    if(a*b != n){
        printf("2D matrix can't be formed");
    }
    else{
        int c = 0;
        int arr2[a][b];
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                arr2[i][j] = arr[c];
                c++;
            }
        }
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                printf("%d\t",arr2[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
