#include <stdio.h>

int multiple(int a, int b) {
    return a * b;
}

int main() {
    int x, y, resultat;

    printf("Saisir le premier nombre: ");
    scanf("%d", &x);

    printf("Saisir le deuxieme nombre: ");
    scanf("%d", &y);

    resultat = multiple(x, y);

    printf("La multiplication de %d et %d est: %d\n", x, y, resultat);

    return 0;
}

