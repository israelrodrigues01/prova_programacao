#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*
    Nome: Cicero Israel Alves Rodrigues
*/

// Questão 01:
/*
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    float raiz;

    scanf("%d", &n);

    while(1)
    {
        if(n % 2 != 0){
            raiz = sqrt(n);
            break;
        }else if(n == 100){
            raiz = sqrt(n);
            break;
        }else if(n >= -10 && n <= 10)
        {
            raiz = sqrt(n);
            break;
        }
        scanf("%d", &n);
    }

    if(raiz >= 0) printf("%.2f", raiz);
    else printf("Raiz inválida!");

    return 0;
}
*/

// Questão 02:
/*int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, count = 0, i = 0;

    scanf("%d", &n);

    do{
        if(i % 5 == 0 && i % 10 != 0){
            printf("%d ", i);
            count++;
        }
        i++;
    }while(count < n);

    return 0;
}
*/

// Questão 03:
/*
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor1 , valor2, mdc = 1, i , maior;

    scanf("%d", &valor1);
    scanf("%d", &valor2);

    if(valor1 > valor2) maior = valor1;
    else maior = valor2;

    for(i = 1; i <= maior; i++)
    {
        if(valor1 % i == 0 && valor2 % i == 0)
        {
            mdc = i;
        }
    }

    printf("O MDC é: %d", mdc);


    return 0;
}
*/

// Questão 04
/*
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, i, aprovados = 0, reprovados = 0, avf = 0;
    float notas, maior, menor, soma = 0.0, media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
    printf("Nota 1: ");
    scanf("%f", &notas);

    while(notas < 0 || notas > 10.0)
    {
        printf("Desculpe! Digite uma nota entre 0 e 10 ");
        scanf("%f", &notas);
    }

    maior = notas; menor = notas;
    soma = soma + notas;

        if(notas >= 7)
        {
            aprovados++;
        }else if(notas < 3)
        {
            reprovados++;
        }else if(notas >= 3 && notas < 7)
        {
            avf++;
        }

    for(i = 2; i <= n; i++)
    {
        printf("Nota %d: ", i);
        scanf("%f", &notas);
        while(notas < 0 || notas > 10.0)
        {
            printf("Desculpe! Digite uma nota entre 0 e 10 ");
            scanf("%f", &notas);
        }
        if(notas > maior) maior = notas;
        if(notas < menor) menor = notas;

        if(notas >= 7)
        {
            aprovados++;
        }else if(notas < 3)
        {
            reprovados++;
        }else if(notas >= 3 && notas < 7)
        {
            avf++;
        }

        soma = soma + notas;
    }

    media = soma / n;

    printf("\n\nA maior nota é: %.4f\n", maior);
    printf("A menor nota é: %.4f\n", menor);
    printf("A soma das nota é: %.4f\n", soma);
    printf("A média das nota é: %.4f\n", media);
    printf("Aprovados: %d \n", aprovados);
    printf("Reprovados: %d \n", reprovados);
    printf("AVF: %d \n", avf);

    return 0;
}
*/
