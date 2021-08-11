/*
Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a sua vida, ent�o fa�a um algoritmo
que leia o ano de nascimento de uma pessoa e o ano atual, depois calcule e escreva o nome e o n�mero de dias, aproximados, 
j� vividos por essa pessoa.
*/
 
 //Inclus�o de Bibliotecas
#include<stdio.h>

int main () {
	//declara��o de vari�veis
	int anoNasci, anoAtual, diasVida;
	char nome[10];
	//Entrada de Dados
	printf("Digite o nome da pessoa: \n");    //Mostra a mensagem na tela ao usu�rio.
	scanf("%s", &nome);                      //Recebe o dado digitado pelo usu�rio.
	fflush(stdin);
	printf("\nDigite o ano em que %s nasceu: \n", &nome);  
	scanf("%d", &anoNasci);
	fflush(stdin);
	printf("\nDigite o ano atual: \n");  
	scanf("%d", &anoAtual);
	fflush(stdin);
    //Processamento e sa�da de dados
    diasVida = (anoAtual - anoNasci) * 365;
	printf("\n%s ja viveu aproximadamente %d dias.", &nome, diasVida);   //mostra o resultado 
	
return 0;
}
