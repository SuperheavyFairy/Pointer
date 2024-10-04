#include<stdio.h>
#include"struct.h"

void read(sinhvien* inp){
    printf("%s\n%s\n%d", inp->id, inp->name, inp->point);
}