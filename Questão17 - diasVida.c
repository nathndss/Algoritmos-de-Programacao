/*
Você tem um desejo incontrolável de descobrir quantos dias você já viveu em toda a sua vida, então faça um algoritmo
que leia o ano de nascimento de uma pessoa e o ano atual, depois calcule e escreva o nome e o número de dias, aproximados, 
já vividos por essa pessoa.
*/
 
 //Inclusão de Bibliotecas
#include<stdio.h>

int main () {
	//declaração de variáveis
	int anoNasci, anoAtual, diasVida;
	char nome[10];
	//Entrada de Dados
	printf("Digite o nome da pessoa: \n");    //Mostra a mensagem na tela ao usuário.
	scanf("%s", &nome);                      //Recebe o dado digitado pelo usuário.
	fflush(stdin);
	printf("\nDigite o ano em que %s nasceu: \n", &nome);  
	scanf("%d", &anoNasci);
	fflush(stdin);
	printf("\nDigite o ano atual: \n");  
	scanf("%d", &anoAtual);
	fflush(stdin);
    //Processamento e saída de dados
    diasVida = (anoAtual - anoNasci) * 365;
	printf("\n%s ja viveu aproximadamente %d dias.", &nome, diasVida);   //mostra o resultado 
	
return 0;
}
