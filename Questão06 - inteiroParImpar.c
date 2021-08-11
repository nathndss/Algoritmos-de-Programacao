/*Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.*/

//Inclusão de Bibliotecas
#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Função para permitir a acentuação.
	//declaração de variáveis
	int numero; 
	//Entrada de Dados
	printf ("Digite o número a ser verificado:\n"); 				//Mostra a mensagem na tela ao usuário.
	scanf("%d" , &numero); 											//Recebe o dado digitado pelo usuário.
	//Processamento de dados
	if(numero %2 == 0) 								   			//Condição para mostrar os resultados.
	//Saída de dados apresentada ao usuário
	printf ("\nO número é PAR!");		 				//Apresentará na tela ao usuário, caso a condição tenha sido atendida.
	else printf ("O número é ÍMPAR");                   //Apresentará na tela ao usuário, caso a condição NÃO tenha sido atendida.
	
return 0;
}
