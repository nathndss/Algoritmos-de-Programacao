/*Completar o exerc�cio 3: 'Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo (tri�ngulo � uma figura
 geom�trica onde cada lado � menor do que a soma dos outros dois lados)' com uma mensagem para quando a condi��o n�o for satisfeita (falsa).*/
 
 //Inclus�o de Bibliotecas
#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Fun��o para permitir a acentua��o
	//declara��o de vari�veis
	int valor1, valor2, valor3;
	//Entrada de Dados
	printf("Digite o valor 1: \n");    //Mostra a mensagem na tela ao usu�rio.
	scanf("%d", &valor1);             //Recebe o dado digitado pelo usu�rio.
	printf("\nDigite o valor 2: \n");  
	scanf("%d", &valor2);
	printf("\nDigite o valor 3: \n"); 
	scanf("%d", &valor3);
    //Processamento
	if ((valor1 + valor2) > valor3 && (valor1+valor3) > valor2 && (valor2+valor3) > valor1) //Condi��o para mostrar os resultados.
	//sa�da de dados
	printf("\nOs valores CONSTITUEM os lados de um tri�ngulo!");              //Apresentar� na tela ao usu�rio, caso a condi��o tenha sido atendida.
	else printf("\nOs valores N�O constituem os lados de um tri�ngulo!");    //Apresentar� na tela ao usu�rio, caso a condi��o N�O tenha sido atendida.
	   
return 0;
}
