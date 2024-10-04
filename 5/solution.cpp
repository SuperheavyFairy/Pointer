#include<stdio.h>

void read(){
    int n;
    scanf("%d", &n);
    int *arr;
    arr = (int*) memloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", *(arr+i));
    }
    for(int i = n-1; i >= 0; i--){
        printf("%d ", *(arr+i));
    }
}