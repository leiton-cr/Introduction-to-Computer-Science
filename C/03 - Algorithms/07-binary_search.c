#include <cs50.h>
#include <stdio.h>

bool search(int number, int n[], int min, int max) {
    int half = ((max - min) / 2) + min;

    if (number == n[half]) {
        return true;
    }

    if ((max - min) == 1) {
        return false;
    }

    if (number < n[half]) {
        max = half;
        search(number, n, min, max);
    }
    else if (number > n[half]) {
        min = half;
        search(number, n, min, max);
    }
}

int main(void) {
    int n[] = {0, 2, 3, 4, 5, 6, 7};

    bool r = search(-1, n, 0, 7);

    printf("%i", r);
}