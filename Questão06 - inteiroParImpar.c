/*Escrever um algoritmo que determine se um n�mero inteiro qualquer � PAR ou IMPAR.*/

//Inclus�o de Bibliotecas
#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Fun��o para permitir a acentua��o.
	//declara��o de vari�veis
	int numero; 
	//Entrada de Dados
	printf ("Digite o n�mero a ser verificado:\n"); 				//Mostra a mensagem na tela ao usu�rio.
	scanf("%d" , &numero); 											//Recebe o dado digitado pelo usu�rio.
	//Processamento de dados
	if(numero %2 == 0) 								   			//Condi��o para mostrar os resultados.
	//Sa�da de dados apresentada ao usu�rio
	printf ("\nO n�mero � PAR!");		 				//Apresentar� na tela ao usu�rio, caso a condi��o tenha sido atendida.
	else printf ("O n�mero � �MPAR");                   //Apresentar� na tela ao usu�rio, caso a condi��o N�O tenha sido atendida.
	
return 0;
}
