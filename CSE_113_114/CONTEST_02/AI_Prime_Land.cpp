#include <stdio.h>

int main() {
    while (1) {
        int p[20], e[20];
        int n = 0;
        int x = 1;
        int val;

       
        while (scanf("%d", &val) == 1) {
            if (val == 0) return 0; 
            p[n] = val;
            scanf("%d", &e[n]);
            
            int i;
            for (i = 0; i < e[n]; i++) x *= p[n];
            n++;
            if (getchar() == '\n') break;
        }

        x -= 1; 

        int factors[100][2], fcnt = 0;
        int i;
        for (i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                int cnt = 0;
                while (x % i == 0) {
                    x /= i;
                    cnt++;
                }
                factors[fcnt][0] = i;
                factors[fcnt][1] = cnt;
                fcnt++;
            }
        }
        if (x > 1) {
            factors[fcnt][0] = x;
            factors[fcnt][1] = 1;
            fcnt++;
        }

        for (i = fcnt - 1; i >= 0; i--) {
            printf("%d %d", factors[i][0], factors[i][1]);
            if (i > 0) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
