#include <stdio.h>

int helloGDB(int i)
{
        if (i > 4) {
                printf("Hello\n");
        }
}

int main(void)
{
        int i;
        int arr[20];
        int arr_b[20];

        for(i=0;i<20;i++) {
                arr_b[i] = arr[i];
        }

        helloGDB(5);
        helloGDB(6);
        helloGDB(2);
}
