#include <stdio.h>

    int main(){
        int idade = 25;
        int quantidade = 4;
        float altura = 1.79;
        double peso = 125.50;
        char opcao = 'A';
        char nome[10] = "Rodrigo";

        printf("A idade do %s é: %danos\n", nome, idade);
        printf("A altura é: %e\n", altura);
        printf("A opção é :%c\n", opcao);

    /*
    printf("%formatos1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante no formato científico.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.    
    */

}