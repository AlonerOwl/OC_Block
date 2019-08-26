#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a = 100;
    void (^block2)(void) = ^{ // block 实现
        printf("%d\n", a);
    };
    block2();
    
    return 0;
}
