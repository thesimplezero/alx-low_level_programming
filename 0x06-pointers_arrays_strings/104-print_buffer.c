#include <stdio.h>

void print_buffer(char *b, int size)
{
    int i, j;
    unsigned char c;

    if (size <= 0) {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10) {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++) {
            if (i + j < size) {
                printf("%02x", b[i + j]);
            } else {
                printf("  ");
            }

            printf(" ");
        }

        for (j = 0; j < 10; j++) {
            if (i + j < size) {
                c = b[i + j];
                if (c < 32 || c > 126) {
                    printf(".");
                } else {
                    printf("%c", c);
                }
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }
}
