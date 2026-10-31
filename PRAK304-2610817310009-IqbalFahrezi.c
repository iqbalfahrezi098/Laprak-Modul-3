#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    if (a >= 100) {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }
    else if (a >= 20 || a == 10) {
        printf("Puluhan\n");
    }
    else if (a >= 11) {
        printf("Belasan\n");
    }
    else if (a >= 1) {
        printf("Satuan\n");
    }
    else {
        printf("Nol\n");
    }

    return 0;
}