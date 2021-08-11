/*Alterar o exercício do triângulo: "Dado três valores, verificar se eles podem constituir os lados de um triângulo 
(triângulo é uma figura geométrica onde cada lado é menor do que a soma dos outros dois lados)", de forma que o algoritmo apresente
no caso de triângulo o seu tipo: equilátero (todos os lados são iguais), isósceles (dois lados iguais) 
ou um outro triângulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo (chinesinho) ao lado. .*/

//Inclusão de Bibliotecas
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Função para permitir a acentuação
	//declaração de variáveis
	int valor1, valor2, valor3;                                                    
	//Entrada de Dados
	printf("Digite o valor 1: \n");   										 //Chinesinho: 3
	scanf("%d", &valor1);             
	printf("\nDigite o valor 2: \n");  										//Chinesinho: 4
	scanf("%d", &valor2);
	printf("\nDigite o valor 3: \n"); 										//Chinesinho: 6
	scanf("%d", &valor3);
    //Processamento e saída de dados
	if ((valor1 + valor2) > valor3 && (valor1+valor3) > valor2 && (valor2+valor3) > valor1){ //Chinesinho:(3+4)>6 e (3+6)>4 e (4+6)>3 - Verdadeiro/verdadeiro/verdadeiro
	printf("\nOs valores CONSTITUEM os lados de um triângulo!");
	  if (valor1 == valor2 && valor2 == valor3)                               //Chinesinho: 3=4 e 4=6  Falso/Falso - não é Equilátero
	  printf("\nEsse Triângulo é Equilátero!");
	  	else if (valor1 == valor2 && valor2 != valor3)                       //Chinesinho: 3=4 e 4 diferente de 6 - Falso/Verdadeiro - não é Isósceles
	  	printf("\nEsse Triângulo é Isósceles!");
			else if (valor1 != valor2 && valor2 != valor3 && valor1 != valor3)  //Chinesinho: 3 diferente de 4 e 4 diferente de 6 - Verdadeiro/Verdadeiro - Esacaleno  
			printf("\nEsse Triângulo é Escaleno!");
	}else printf("\nOs valores NÃO constituem os lados de um triângulo!");
	
return 0;
}
