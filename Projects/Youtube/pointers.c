#include <stdio.h>
void main() {
    char *str = "hello", *p;
    p = str;

    while (*p != '\0') {
        (*(p++))++;
    }
    printf("str = %s, p = %s\n", str, p);
}