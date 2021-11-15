#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

void welcome(){
    char nome[20];   // VARIAVEL DO NOME e VARIAVEL DE CONFIRMAÇÃO
    int aux;
    printf("**************BEM VINDO A LOCOBOTS 2021*****************");
    printf("\n\nE um prazer te-lo aqui, para nos conhecermos melhor, qual o seu nome?  ");
    gets(nome);  //SALVANDO O NOME
    printf("E um grande prazer ");
    puts(nome);   //IMPRIMINDO O NOME
    printf("\n");
    puts(nome);    //IMPRIME NOME
    printf("Agora inicializaremos uma serie de perguntas para podermos tracar a melhor area no qual o seu perfil se agregue\n");
}

void formulario(){

    printf("\nAgora, voce sera redirecionado para um formulario, no qual deve responde-lo com muita atencao:\n");
    system("pause");  //apenas para teste antes das proximas perguntas
    system("start chrome https://7iexjetqarc.typeform.com/to/bN7wyooQ"); //direciona para o formulario

}

void perguntas(){ //escrever funções da swot
    int aux=0, resultado=0;
   // printf("\n agora seram exibidas algumas perguntas, tente respondelas da forma mais clara possivel");
    system("pause");
    system("cls");

    printf("\nVoce esta se sentindo bem? digite:");
    printf("\n1 para nao");
    printf("\n2 para mais o menos.");
    printf("\n3 para sim. ");
    scanf("%d",&aux);
    if ((aux!=1)&&(aux!=2)&&(aux!=3)){
        while((aux!=1)&&(aux!=2)&&(aux!=3)){
        printf("\nTente outra resposta: ");
        scanf("%d",&aux);
        }
    }
    else{resultado=resultado+aux;}

    printf("\nVoce tem conversado com as pessoas? digite:");
    printf("\n1 para nao");
    printf("\n2 para mais o menos.");
    printf("\n3 para sim. ");
    scanf("%d",&aux);
    if ((aux!=1)&&(aux!=2)&&(aux!=3)){
        while((aux!=1)&&(aux!=2)&&(aux!=3)){
        printf("\nTente outra resposta: ");
        scanf("%d",&aux);
        }
    }
    else{resultado=resultado+aux;}

    printf("\nVoce tem se dedicado aos estudos? digite:");
    printf("\n1 para nao");
    printf("\n2 para mais o menos.");
    printf("\n3 para sim. ");
    scanf("%d",&aux);
    if ((aux!=1)&&(aux!=2)&&(aux!=3)){
        while((aux!=1)&&(aux!=2)&&(aux!=3)){
        printf("\nTente outra resposta: ");
        scanf("%d",&aux);
        }
    }
    else{resultado=resultado+aux;}

    printf("\nVoce tem conversado com a sua familia? digite:");
    printf("\n1 para nao");
    printf("\n2 para mais o menos.");
    printf("\n3 para sim. ");
    scanf("%d",&aux);
    if ((aux!=1)&&(aux!=2)&&(aux!=3)){
        while((aux!=1)&&(aux!=2)&&(aux!=3)){
        printf("\nTente outra resposta: ");
        scanf("%d",&aux);
        }
    }
    else{resultado=resultado+aux;}

    printf("\nVoce tem se sentido motivado com a faculdade? digite:");
    printf("\n1 para nao");
    printf("\n2 para mais o menos.");
    printf("\n3 para sim. ");
    scanf("%d",&aux);
    if ((aux!=1)&&(aux!=2)&&(aux!=3)){
        while((aux!=1)&&(aux!=2)&&(aux!=3)){
        printf("\nTente outra resposta: ");
        scanf("%d",&aux);
        }
    }
    else{resultado=resultado+aux;}

    printf("\nVoce esta motivado com a Locobots? digite:");
    printf("\n1 para nao");
    printf("\n2 para mais o menos.");
    printf("\n3 para sim. ");
    scanf("%d",&aux);
    if ((aux!=1)&&(aux!=2)&&(aux!=3)){
        while((aux!=1)&&(aux!=2)&&(aux!=3)){
        printf("\nTente outra resposta: ");
        scanf("%d",&aux);
        }
    }
    else{resultado=resultado+aux;}

    resposta(resultado);

    //
}
void resposta(int resultado){
    if(resultado<7){
        printf("\n Caso se sinta a vontade, procure alguem da equipe para que possamos conversar, bater um papo sempre faz bem!");
    }
    if(resultado<11){
        printf("\n Até voce e legal! mas procure se dedicar mais as suas atividades");
    }
    if(resultado>10){
        printf("\n Voce e 10! meu campeao");
    }

}

void encerramento(){
    system("cls");
    printf("\n O intuito desse projeto foi passar uma mensagem positiva a voce, mostrando que podemos superar dores e fraquezas, evitar ameacas e se preparar para as inevitaveis e sempre se apoiar naquilo que te fortalece. Junto com essa ideia trouxemos a matriz SWOT, onde trabalhamos com suas forcas, suas fraquezas, oportunidades e ameacas. Uma ferramenta que podemos usar nao somente em negocios, mas na sua vida pessoal. Esperamos que voce tenha apreciado a experiencia!\n")
    system("pause")
}

int main()
{
    // INICIAZAÇÃO DO SOFTWARE
    welcome();
    perguntas();
    formulario();
    encerramento();
    return 0;
}
