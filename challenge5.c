#include<stdio.h>

long long factorielle (int n){
    if (n == 0){
        return 1;
    }
    return n * factorielle(n-1);
}

int main (){

    int n ;

    printf("entrer un entier :");
    scanf("%d",&n);

    if (n < 0) {
        printf("Ereur.\n");
    } else {
        printf("Factorielle de %d = %d\n", n, factorielle(n));
    }

    return 0;
}
