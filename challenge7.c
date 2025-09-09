#include<stdio.h>
#include<string.h>

void inverser_chaine(char str[]){
        int debut = 0 ;
        int fin = strlen(str)- 1 ;
        char a ;

        while (debut < fin){
            a = str[debut] ;
            str[debut] = str [fin];
            str[fin] = a ;
            debut++;
            fin--;
        }

}

int main (){
        char s[50] ;
        printf("entrer une chaine de caracteres : ");
        scanf("%s",s);
        inverser_chaine(s);
        printf("L'inverdse est : %s",s);

return 0;
}
