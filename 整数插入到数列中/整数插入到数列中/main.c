#include <stdio.h>

#define N 100
int n;
int insert_num;

int find_index(int* arr, int sz){
    int index = sz-1;
    for (int i=0; i<sz-1; i++) {
        if(arr[i]>insert_num){
            index = i;
            break;
        }
    }
    return index;
}

void insert(int* arr, int sz){
    int index = find_index(arr, n+1);
    int i;
    for (i=sz-1; i>index; i--) {
        arr[i] = arr[i-1];
    }
    arr[i] = insert_num;
}

void print(int* arr, int sz){
    for (int i=0; i<sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    /********** Begin **********/
    scanf("%d", &n);
    int arr[N];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &insert_num);
    insert(arr, n+1);
    print(arr, n+1);
    /********** End **********/
    return 0;
}
