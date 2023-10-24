#include <limits.h> // for INT_MAX
#include <stdio.h>

int subtract2sc_issafe(int x, int y) {
    //get number of bits in int
    int intBits = sizeof(int) * 8;

    // Check if y is the minimum representable int value
    if (y == (1 << (intBits - 1))) {
        printf("Overflow: Cannot safely compute %d - %d\n", x, y);
        return 0;
    }
    // subtract values
    int diff = x - y;
    printf("Result of %d - %d = %d\n", x, y, diff);

    //check for overflow
    if ((x > 0 && y < 0 && diff < 0) || (x < 0 && y > 0 && diff > 0)) {
        printf("Overflow: Cannot safely compute %d - %d\n", x, y);
        return 0;
    }

    return 1;
}
