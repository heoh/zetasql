#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
void print_two_strings(char **strings) {
    if (strings == NULL) return;

    // 배열의 첫 번째, 두 번째 포인터를 가져옵니다.
    char *str1 = strings[0];
    char *str2 = strings[1];

    printf("First: %s\n", str1);
    printf("Second: %s\n", str2);

    fflush(stdout);
}
