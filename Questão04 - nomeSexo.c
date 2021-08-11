/*Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saída uma das seguintes mensagens:
 “Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.” para o sexo feminino, acrescentando o nome em seguida.*/
 
 //Inclusão de Bibliotecas
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main () {
	//declaração de variáveis
	char nome[20];
	char sexo;
	int M, F;
	//Entrada de Dados
	printf("Digite o nome da pessoa: \n");    //Mostra a mensagem na tela ao usuário.
	scanf("%s", &nome);                      //Recebe o dado digitado pelo usuário.
	fflush(stdin);
	printf("\nDigite o sexo da pessoa (M ou F): \n");  
	scanf("%c", &sexo);
    //Processamento
    if (toupper(sexo)=='M')
    //Saída de dados
	printf("\nIlmo Sr. %s\n", &nome);      //Mostra o resultado na tela ao usuário caso a condição tenha sido atendida.
	else printf("\nIlma Sra. %s\n", &nome); //Mostra o resultado  na tela ao usuário caso a condição não tenha sido atendida.
	
return 0;
}
