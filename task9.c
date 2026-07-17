#include <stdio.h>

long long get_min_steps(long long x, long long y) {
    long long diff = y - x;
    if (diff <= 0) return 0;

    long long moves = 0;
    long long step_len = 1;
    long long total_dist = 0;

    while (total_dist < diff) {
        moves++;
        total_dist += step_len;
        if (total_dist >= diff) break;

        moves++;
        total_dist += step_len;
        step_len++;
    }

    return moves;
}

int main() {
    long long x, y;
    if (scanf("%lld %lld", &x, &y) != 2) return 0;

    printf("%lld\n", get_min_steps(x, y));

    return 0;
}