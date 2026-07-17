#include <stdio.h>
#include <string.h>
#include <ctype.h>

long long fact(int n) {
    long long f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    char word[50];
    printf("Введіть слово: ");
    if (scanf("%49s", word) != 1) return 0;

    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        word[i] = tolower(word[i]);
    }

    int counts[256] = {0};
    for (int i = 0; i < len; i++) {
        counts[(unsigned char)word[i]]++;
    }

    long long total = fact(len);
    for (int i = 0; i < 256; i++) {
        if (counts[i] > 1) {
            total /= fact(counts[i]);
        }
    }

    printf("Кількість анаграм: %lld\n", total);

    return 0;
}