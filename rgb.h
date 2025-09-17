#ifndef RGB_HEXPARSER_UGE38_RGB_H
#define RGB_HEXPARSER_UGE38_RGB_H

#include <stdint.h>

struct rgb_t {
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

struct rgb_t parse_rgb(char[]);

#endif //RGB_HEXPARSER_UGE38_RGB_H