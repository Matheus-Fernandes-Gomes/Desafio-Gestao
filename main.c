#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    // INICIAZAÇÃO DO SOFTWARE
    char nome[20];   // VARIAVEL DO NOME e VARIAVEL DE CONFIRMAÇÃO
    int aux;
    printf("**************BEM VINDO A LOCOBOTS 2021*****************");
    printf("\n\nE um prazer te-lo aqui, para nos conhecermos melhor, qual o seu nome?  ");
    gets(nome);  //SALVANDO O NOME
    printf("E um grande prazer ");
    puts(nome);   //IMPRIMINDO O NOME
    printf("\n");
    puts(nome);    //IMPRIME NOME
    printf("\nAgora inicializaremos uma serie de perguntas para podermos traçar a melhor area no qual o seu perfil se agregue");
    //abre o formulario
    printf("\nAgora, voce sera redirecionado para um formulario, no qual deve responde-lo com muita atencao:\n");
    system("pause");  //apenas para teste antes das proximas perguntas
    system("start chrome https://github.com/wolfMatheus"); //direciona para o formulario
    return 0;
}
