#include <stdio.h>

int main(int argc, char const *argv[]) {
    __block int i = 1024;
    void (^block2)(void) = ^{ // block 实现
        printf("%d\n", i);
        i = 1023;
    };
    block2();
    
    return 0;
}
