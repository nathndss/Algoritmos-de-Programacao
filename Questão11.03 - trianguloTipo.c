/*Alterar o exerc�cio do tri�ngulo: "Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo 
(tri�ngulo � uma figura geom�trica onde cada lado � menor do que a soma dos outros dois lados)", de forma que o algoritmo apresente
no caso de tri�ngulo o seu tipo: equil�tero (todos os lados s�o iguais), is�sceles (dois lados iguais) 
ou um outro tri�ngulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo (chinesinho) ao lado. .*/

//Inclus�o de Bibliotecas
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Fun��o para permitir a acentua��o
	//declara��o de vari�veis
	int valor1, valor2, valor3;                                                    
	//Entrada de Dados
	printf("Digite o valor 1: \n");   										 //Chinesinho: 3
	scanf("%d", &valor1);             
	printf("\nDigite o valor 2: \n");  										//Chinesinho: 4
	scanf("%d", &valor2);
	printf("\nDigite o valor 3: \n"); 										//Chinesinho: 6
	scanf("%d", &valor3);
    //Processamento e sa�da de dados
	if ((valor1 + valor2) > valor3 && (valor1+valor3) > valor2 && (valor2+valor3) > valor1){ //Chinesinho:(3+4)>6 e (3+6)>4 e (4+6)>3 - Verdadeiro/verdadeiro/verdadeiro
	printf("\nOs valores CONSTITUEM os lados de um tri�ngulo!");
	  if (valor1 == valor2 && valor2 == valor3)                               //Chinesinho: 3=4 e 4=6  Falso/Falso - n�o � Equil�tero
	  printf("\nEsse Tri�ngulo � Equil�tero!");
	  	else if (valor1 == valor2 && valor2 != valor3)                       //Chinesinho: 3=4 e 4 diferente de 6 - Falso/Verdadeiro - n�o � Is�sceles
	  	printf("\nEsse Tri�ngulo � Is�sceles!");
			else if (valor1 != valor2 && valor2 != valor3 && valor1 != valor3)  //Chinesinho: 3 diferente de 4 e 4 diferente de 6 - Verdadeiro/Verdadeiro - Esacaleno  
			printf("\nEsse Tri�ngulo � Escaleno!");
	}else printf("\nOs valores N�O constituem os lados de um tri�ngulo!");
	
return 0;
}
