#include <stdio.h>

int somme(int a, int b) {
    return a + b;
}

int main() {
    int x, y, resultat;

    printf("Saisir le premier nombre: ");
    scanf("%d", &x);

    printf("Saisir le deuxieme nombre: ");
    scanf("%d", &y);

    resultat = somme(x, y);

    printf("La somme de %d et %d est: %d\n", x, y, resultat);

    return 0;
}

