#include <stdio.h>
    int main(){
        
        int idade, matricula;
        float altura;
        char nome[50];

        int idade2, matricula2;
        float altura2;
        char nome2[50];
    
        //Entrada das informações do primeiro cadastro

        printf("Digite sua idade:\n");
        scanf("%d", &idade);

        printf("Digite sua altura:\n");
        scanf("%f", &altura);

        printf("Digite o seu nome:\n");
        scanf("%s", nome);

        printf("Digite sua matricula:\n");
        scanf("%d", &matricula);

        //Entrada das informações do segundo cadastro

        printf("Digite sua idade:\n");
        scanf("%d", &idade2);

        printf("Digite sua altura:\n");
        scanf("%f", &altura2);

        printf("Digite o seu nome:\n");
        scanf("%s", nome2);

        printf("Digite sua matricula:\n");
        scanf("%d", &matricula2);

        //Impressão na tela dos cadastros

        printf("Cadastro 1: \n");
        printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
        printf("Idade: %d - Altura: %.1f\n" , idade, altura);

        printf("Cadastro 2: \n");
        printf("Nome do aluno: %s - Matricula: %d\n", nome2, matricula2);
        printf("Idade: %d - Altura: %.2f\n" , idade2, altura2);

        return 0;

    }