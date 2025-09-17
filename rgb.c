#include "rgb.h"

// '0' - '9'
// 'A' - 'F' -> 15
int parse_one_hex(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0'; // fx: 55 - 48 = 7
    }

    if (c >= 'A' && c <='F') {
        return c - 'A' + 10;
    }

    return -1;
}

// 0xFF = 15*16^1 + 15*16^0
uint8_t parse_two_hexes(char first, char second) {
    int a = parse_one_hex(first); // 'F'
    int b = parse_one_hex(second); // 'F'

    // TODO: Tjek om a eller b er -1

    return a * 16 + b;
}

struct rgb_t parse_rgb(char hex[]) {
    // char hashtag = hex[0];
    char r1 = hex[1]; // 'F'
    char r2 = hex[2]; // 'F'
    uint8_t r = parse_two_hexes(r1, r2); // 0xFF

    char g1 = hex[3];
    char g2 = hex[4];
    uint8_t g = parse_two_hexes(g1, g2); // 0x00

    char b1 = hex[5];
    char b2 = hex[6];
    uint8_t b = parse_two_hexes(b1, b2); // 0x00

    struct rgb_t result = { r, g, b };
    return result;
}