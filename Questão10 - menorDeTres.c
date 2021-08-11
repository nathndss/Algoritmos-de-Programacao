/*Faça um algoritmo que leia três valores numéricos e encontre qual o menor deles, 
mostrando-o no final. Faça o chinesinho ao lado do seu algoritmo.*/

//Inclusão de Bibliotecas
#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Função para permitir a acentuação.
	//declaração de variáveis
	int numero1, numero2, numero3, menor;  
	//Entrada de Dados
	printf ("Digite o primeiro número:\n"); 									     		//Chinesinho: 2
	scanf("%d" , &numero1); 				
	printf ("Digite o segundo número:\n"); 													//Chinesinho: 5
	scanf("%d" , &numero2); 
	printf ("Digite o terceiro número:\n"); 											    //Chinesinho: 7
	scanf("%d" , &numero3);
	//Processamento e saída de dados
	if(numero1<numero2 && numero1<numero3) {         										//Chinesinho: 2<5 e 2<7  VERDADEIRO
		menor = numero1;																	//Chinesinho: Então o menor número será 2.
		printf ("\nO menor número é: %d", menor);  
	}else if (numero2<numero1 && numero2<numero3){  										//Chinesinho: 5<2 e 5<7  FALSO
		menor = numero2;																	
		printf ("\nO menor número é: %d", menor);               
	}else if (numero3<numero1 && numero3<numero2){ 											//Chinesinho: 7<2 e 7<5  FALSO
		menor = numero3;
		printf ("\nO menor número é: %d", menor); 
	}
return 0;
}
