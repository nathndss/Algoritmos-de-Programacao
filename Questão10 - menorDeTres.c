/*Fa�a um algoritmo que leia tr�s valores num�ricos e encontre qual o menor deles, 
mostrando-o no final. Fa�a o chinesinho ao lado do seu algoritmo.*/

//Inclus�o de Bibliotecas
#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Fun��o para permitir a acentua��o.
	//declara��o de vari�veis
	int numero1, numero2, numero3, menor;  
	//Entrada de Dados
	printf ("Digite o primeiro n�mero:\n"); 									     		//Chinesinho: 2
	scanf("%d" , &numero1); 				
	printf ("Digite o segundo n�mero:\n"); 													//Chinesinho: 5
	scanf("%d" , &numero2); 
	printf ("Digite o terceiro n�mero:\n"); 											    //Chinesinho: 7
	scanf("%d" , &numero3);
	//Processamento e sa�da de dados
	if(numero1<numero2 && numero1<numero3) {         										//Chinesinho: 2<5 e 2<7  VERDADEIRO
		menor = numero1;																	//Chinesinho: Ent�o o menor n�mero ser� 2.
		printf ("\nO menor n�mero �: %d", menor);  
	}else if (numero2<numero1 && numero2<numero3){  										//Chinesinho: 5<2 e 5<7  FALSO
		menor = numero2;																	
		printf ("\nO menor n�mero �: %d", menor);               
	}else if (numero3<numero1 && numero3<numero2){ 											//Chinesinho: 7<2 e 7<5  FALSO
		menor = numero3;
		printf ("\nO menor n�mero �: %d", menor); 
	}
return 0;
}
