#include<stdio.h>

int main() {
    int a = 26, b;
    int *ptr, *ptr1;
    ptr = &a;
    ptr1 = &b;
    b = 86;
    printf("%d %d\n", *ptr, *ptr1);
    return 0;
}
