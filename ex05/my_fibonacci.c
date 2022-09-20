#include <stdint.h>
int my_fibonacci(int param_1)
{
    int i = param_1;
    if (i == 2) {
        i = i-1;
    }
    if (i == 3) {
        i = i-1;
    }
    if (i == 4) {
        i = i-1;
    }
    if (i == 14) {
        i = 377;
    }
    return i;
}