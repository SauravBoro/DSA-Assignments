#include<stdio.h>
#include<time.h>
#include<stdlib.h>

typedef long long ll;

void swap(ll *x, ll *y)
{
    ll temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(ll a[], ll n){

    for(ll i = 0; i < n - 1; i++){

        for(ll j = i + 1; j < n; j++){

            if(a[j]<a[i]){
                swap(&a[j],&a[i]);
            }
        }
    }
}

void bubble_sort(ll a[], ll n){
    int i,j;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++){
            if(a[j] > a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

int main(){
    printf("Enter the number of elements of array: ");
    ll n;
    scanf("%lld",&n);

    ll a[n];
    // for(ll i = 0; i < n; i++) a[i] = 1 + (rand()%100);
    
    for(ll i = 0; i < n; i++) a[i] = i + 1;

    clock_t start_selection_sort, end_selection_sort, start_bubble_sort, end_bubble_sort;

    ll time_selection_sort, time_bubble_sort;

    start_selection_sort = clock();

    selection_sort(a, n);

    end_selection_sort = clock();

    time_selection_sort = end_selection_sort - start_selection_sort;

    printf("Time taken by selection sort: %f\n", (double) time_selection_sort/ (double) CLOCKS_PER_SEC);

    start_bubble_sort = clock();

    bubble_sort(a, n);

    end_bubble_sort = clock();

    time_bubble_sort = end_bubble_sort - start_bubble_sort;

    printf("Time taken by bubble sort: %f\n", (double) time_bubble_sort/ (double) CLOCKS_PER_SEC);

}
