#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;

    for (i = 0; i < len; i++)
    {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    printf("  int x = 0x%x, bytes =", x);
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x)
{
    printf("float x = %f, bytes =", x);
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x)
{
    printf("void *x = %p, bytes =", x);
    show_bytes((byte_pointer)&x, sizeof(void *));
}
