#include <stdio.h>

int main() {
    float nilai;

    printf("Masukkan nilai: ");
    scanf("%f", &nilai);

    if (nilai >= 80) {
        printf("A\n");
    }
    else if (nilai >= 70) {
        printf("B\n");
    }
    else if (nilai >= 60) {
        printf("C\n");
    }
    else if (nilai >= 50) {
        printf("D\n");
    }
    else {
        printf("E\n");
    }

    return 0;
}