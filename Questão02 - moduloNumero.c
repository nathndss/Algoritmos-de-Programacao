/*Efetuar a leitura de um n�mero e apresent�-lo como o seu m�dulo (somente seu valor absoluto) elaborando os c�lculos matem�ticos para isso.*/

//Inclus�o de Bibliotecas
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main () {
	setlocale(LC_ALL, "Portuguese");                       //Fun��o para permitir a acentua��o
	//declara��o de vari�veis
	float numero, valorAbsoluto;
	//Entrada de Dados
	printf("Digite o n�mero: \n");                       //Mostra a mensagem na tela ao usu�rio.
	scanf("%f", &numero);                               //Recebe o dado digitado pelo usu�rio.
    //Processamento
	if (numero < 0)                                     //Condi��o para mostrar os resultados.
	//sa�da de dados
	   printf("Valor absoluto �: %.1f", numero*-1);     //Apresentar� na tela ao usu�rio, caso a condi��o tenha sido atendida.
	   else printf("Valor absoluto �: %.1f",numero);    //Apresentar� na tela ao usu�rio, caso a condi��o N�O tenha sido atendida.
	   
return 0;
}
