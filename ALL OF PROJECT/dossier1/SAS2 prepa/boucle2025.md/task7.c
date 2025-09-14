#include <stdio.h>

int main() {
    int n, i, carre;
    printf("Entrez un nombre n : ");
    scanf("%d", &n);

    for (i = 2; ; i += 2) {  // on parcourt uniquement les pairs
        carre = i * i;
        if (carre > n) break;
        printf("%d\n", carre);
    }

    return 0;
}
