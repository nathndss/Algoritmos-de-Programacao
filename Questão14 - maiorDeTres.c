/*Fazer um algoritmo que leia três valores, determine e imprima o maior deles.*/

//Inclusão de Bibliotecas
#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Função para permitir a acentuação.
	//declaração de variáveis
	int numero1, numero2, numero3, maior;  
	//Entrada de Dados
	printf ("Digite o primeiro número:\n"); 		//Mostrar ao usuário a mensagem para digitar o dado				     		
	scanf("%d" , &numero1); 				       //Receber o dado do usuário
	printf ("Digite o segundo número:\n"); 													
	scanf("%d" , &numero2); 
	printf ("Digite o terceiro número:\n"); 											    
	scanf("%d" , &numero3);
	//Processamento e saída de dados
	if(numero1>numero2 && numero1>numero3) {        //Condição para mostrar um resultado				
		maior = numero1;																	
		printf ("\nO maior número é: %d", maior);   //Mostra o resultado caso a condição tenha sido atendida
	}else if (numero2>numero1 && numero2>numero3){  //Mostra o resultado caso a condição não tenha sido atendida e coloca outra condição										
		maior = numero2;																	
		printf ("\nO maior número é: %d", maior);               
	}else if (numero3>numero1 && numero3>numero2){ 											
		maior = numero3;
		printf ("\nO maior número é: %d", maior); 
	}
return 0;
}
