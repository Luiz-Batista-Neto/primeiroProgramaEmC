#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("--------------------");
    printf("MENU");
    printf("-------------------- \n");
    printf("1 - INICIAR \n");
    printf("2 - SAIR \n");

    int escolha;
    char nome [20];
    float altura;
    char sexo [1];
    int idade;

    scanf("%d", &escolha);
    switch(escolha){
        case 1:
            printf("Digite seu nome aqui: ");
            scanf("%s", &nome);

            printf("\nAgora coloque a sua altura: ");
            scanf("%f", &altura);

            printf("\nSexo: ");
            scanf("%s", &sexo);

            printf("\nSua Idade: ");
            scanf("%d", &idade);

            printf("__________________________ \n");
            printf("\n                          \n");
            printf("Nome: %s\nAltura: %.2f\nSeu sexo: %s\nSua idade: %d", nome, altura, sexo, idade);
            printf("\n__________________________");
        case 2:
            printf("Programa terminado");
            break;

        default:
            printf("Data invalida");
            break;
    }
    return 0;
}

