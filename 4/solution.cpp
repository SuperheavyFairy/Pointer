#include<stdio.h>

void read(int* inp, int size){
    for(int i = 0; i < size; i++){
        printf("%d", *inp);
        inp++;
    }
}