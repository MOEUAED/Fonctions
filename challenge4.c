#include <stdio.h>

int minimum(int a, int b) {
    if (a < b) {
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

    resultat = minimum(x, y);

    printf("Le mainimum entre %d et %d est: %d\n", x, y, resultat);

    return 0;
}

