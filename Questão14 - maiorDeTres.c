/*Fazer um algoritmo que leia tr�s valores, determine e imprima o maior deles.*/

//Inclus�o de Bibliotecas
#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Fun��o para permitir a acentua��o.
	//declara��o de vari�veis
	int numero1, numero2, numero3, maior;  
	//Entrada de Dados
	printf ("Digite o primeiro n�mero:\n"); 		//Mostrar ao usu�rio a mensagem para digitar o dado				     		
	scanf("%d" , &numero1); 				       //Receber o dado do usu�rio
	printf ("Digite o segundo n�mero:\n"); 													
	scanf("%d" , &numero2); 
	printf ("Digite o terceiro n�mero:\n"); 											    
	scanf("%d" , &numero3);
	//Processamento e sa�da de dados
	if(numero1>numero2 && numero1>numero3) {        //Condi��o para mostrar um resultado				
		maior = numero1;																	
		printf ("\nO maior n�mero �: %d", maior);   //Mostra o resultado caso a condi��o tenha sido atendida
	}else if (numero2>numero1 && numero2>numero3){  //Mostra o resultado caso a condi��o n�o tenha sido atendida e coloca outra condi��o										
		maior = numero2;																	
		printf ("\nO maior n�mero �: %d", maior);               
	}else if (numero3>numero1 && numero3>numero2){ 											
		maior = numero3;
		printf ("\nO maior n�mero �: %d", maior); 
	}
return 0;
}
