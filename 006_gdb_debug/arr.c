#include <stdio.h>

void setup_array(int *arr, size_t size)
{
        size_t i;

        for (i=0;i<size;i++) {
                arr[i] = i;
        }
}

int compute(int a, int b)
{
        return a+b;
}

void print_array(int *arr, size_t size)
{
        size_t i;

        for(i=0; i<size; i++) {
                compute(i, i+3);
        }
}

int main(void)
{
        int a[10];
        int * p = NULL;

        printf("%d\n", *p);

        setup_array(a, 10);
        print_array(a, 10);

        return 0;
}

