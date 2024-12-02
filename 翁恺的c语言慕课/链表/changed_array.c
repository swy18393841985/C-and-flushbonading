#include"array.h"
#include<stdio.h>
Array array_create(int init_size);
void array_free(Array*a);
int *array_at(Array*a,int index);
void array_inflate(Array *a,int more_size);
int main()
{
    return 0;
}

Array array_create(int init_size)
{
    Array a;
    a.size=init_size;
    a.array=(int*)malloc(sizeof(int)*a.size);
    return a;
}

void array_free(Array*a)
{
    free(a->array);
    a->size=0;
    a->array=0;
}