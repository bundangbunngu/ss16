#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Gia tri cua x: %d\n", x);
    printf("Dia chi cua x: %p\n", &x);

    printf("Gia tri cua x thong qua con tro: %d\n", *ptr);
    printf("Dia chi cua x thong qua con tro: %p\n", ptr);

    return 0;
}

