#include <stdio.h>

int main() {
    int p;
    if (scanf("%d", &p) != 1) return 0;

    long long nsk;
    if (scanf("%lld", &nsk) != 1) return 0;

    for (int i = 1; i < p; i++) {
        long long num;
        scanf("%lld", &num);
        
        long long a = nsk;
        long long b = num;
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        long long nsd = a;

        nsk = (nsk / nsd) * num;
    }

    printf("%lld\n", nsk);

    return 0;
}