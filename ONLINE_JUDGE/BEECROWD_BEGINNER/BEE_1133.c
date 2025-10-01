#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    for (int i = X + 1; i < Y; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}
