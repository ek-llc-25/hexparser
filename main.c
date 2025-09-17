#include <stdio.h>
#include "rgb.h"

int main(void) {
    char red_s[] = "#FF0000";
    struct rgb_t red = parse_rgb(red_s);
    printf("%s har rgb(%d, %d, %d)\n", red_s, red.r, red.g, red.b);
}