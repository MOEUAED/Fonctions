#include <stdio.h>

int maximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y, resultat;

    printf("Saisir le premier nombre: ");
    scanf("%d", &x);

    printf("Saisir le deuxieme nombre: ");
    scanf("%d", &y);

    resultat = maximum(x, y);

    printf("Le maximum entre %d et %d est: %d\n", x, y, resultat);

    return 0;
}

