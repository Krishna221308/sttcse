#include <cassert>
#include "mathfuncs.h"

int main() {
    // Test add
    assert(add(10, 5) == 15);

    // Test subtract
    assert(subtract(10, 5) == 5);

    // Test multiply
    assert(multiply(10, 5) == 50);

    // Test divide
    assert(divide(10, 5) == 2);

    return 0;
}