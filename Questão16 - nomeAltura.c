/*Fazer um algoritmo que leia o nome e a altura de três pessoas, determine e apresente o nome e a altura da menor delas.*/

//Inclusão de Bibliotecas
#include<stdio.h>

int main () {
	//declaração de variáveis
	char pessoa1[10], pessoa2[10], pessoa3[10];
	float altura1, altura2, altura3, menorAltura;  
	//Entrada de Dados
	printf ("Digite o nome da primeira pessoa: \n"); 		//Mostrar ao usuário a mensagem para digitar o dado				     		
	scanf("%s" , &pessoa1);				                	//Receber o dado do usuário
	fflush(stdin);
	printf ("Digite a altura de %s: \n", &pessoa1);
	scanf("%f" , &altura1);	
	fflush(stdin);
	printf ("\nDigite o nome da segunda pessoa: \n");
	scanf("%s" , &pessoa2);
	fflush(stdin);
	printf ("Digite a altura de %s: \n", &pessoa2);
	scanf("%f" , &altura2);	
	fflush(stdin);
	printf ("\nDigite o nome da terceira pessoa: \n");
	scanf("%s" , &pessoa3);
	fflush(stdin);
	printf ("Digite a altura de %s: \n", &pessoa3);
	scanf("%f" , &altura3);	
	fflush(stdin);
	//Processamento e saída de dados
	if(altura1<altura2 && altura1<altura3) {     				                 				//Condição para mostrar um resultado
		menorAltura = altura1;																				
		printf("\n%s tem a menor altura com %.2f metros", &pessoa1, menorAltura);   		//Mostra o resultado caso a condição tenha sido atendida
	}else if (altura2<altura1 && altura2<altura3) {                 				 			//Mostra o resultado caso a condição não tenha sido atendida e coloca outra condição
		menorAltura = altura2;																				
		printf("\n%s tem a menor altura com %.2f metros", &pessoa2, menorAltura);
			}else if (altura3<altura1 && altura3<altura2) {         						//Mostra o resultado caso a condição não tenha sido atendida e coloca outra condição
				menorAltura = altura3;																					
				printf ("\n%s tem a menor altura com %.2f metros", &pessoa3, menorAltura);
			}
return 0;
}
