/*Ler dois valores num�ricos e apresentar a diferen�a do maior valor pelo menor.*/

//Inclus�o de Bibliotecas
#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Fun��o para permitir a acentua��o.
	//declara��o de vari�veis
	float numero1, numero2, resto; 
	//Entrada de Dados
	printf ("Digite o primeiro n�mero:\n"); 				//Mostra a mensagem na tela ao usu�rio.
	scanf("%f" , &numero1); 											//Recebe o dado digitado pelo usu�rio.
	printf ("Digite o segundo n�mero:\n"); 				//Mostra a mensagem na tela ao usu�rio.
	scanf("%f" , &numero2); 
	//Processamento de dados
	if(numero1>numero2) {								 	//Condi��o para mostrar os resultados.
	resto = (numero1 - numero2);
	//Sa�da de dados apresentada ao usu�rio
	printf ("\nA diferen�a entre o maior e menor n�mero, �: %.0f", resto);		 				//Apresentar� na tela ao usu�rio, caso a condi��o tenha sido atendida.
	}else if (numero1<numero2){
	resto = (numero2 - numero1);
	printf ("\nA diferen�a entre o maior e menor n�mero, �: %.0f", resto);               //Apresentar� na tela ao usu�rio, caso a condi��o N�O tenha sido atendida.
	}
return 0;
}
