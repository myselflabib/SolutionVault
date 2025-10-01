#include <stdio.h>

int main() {
    int A, N, sum = 0;
    
    scanf("%d", &A);
    
    while (1) {
        scanf("%d", &N);
        if (N > 0) {
            break;
        }
    }

    for (int i = 0; i < N; i++) {
        sum += (A + i);
    }

    printf("%d\n", sum);

    return 0;
}
