#include <stdio.h>

#define N 100

void swap(int* a, int* b);
void select_sort(int* arr, int sz);
void print_arr(int* arr, int sz);

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void select_sort(int* arr, int sz){
    for (int i=0; i<sz-1; i++) {
        int min = i;
        for (int j=i+1; j<sz; j++) {
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
        print_arr(arr, sz);
    }
}

void print_arr(int* arr, int sz){
    for (int i=0; i<sz; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}

int main ()
{
    /********** Begin **********/
    int n;
    scanf("%d", &n);
    int arr[N];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    select_sort(arr, n);
    /********** End **********/
    return 0;
}

