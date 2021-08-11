/*Ler dois valores numéricos e apresentar a diferença do maior valor pelo menor.*/

//Inclusão de Bibliotecas
#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Função para permitir a acentuação.
	//declaração de variáveis
	float numero1, numero2, resto; 
	//Entrada de Dados
	printf ("Digite o primeiro número:\n"); 				//Mostra a mensagem na tela ao usuário.
	scanf("%f" , &numero1); 											//Recebe o dado digitado pelo usuário.
	printf ("Digite o segundo número:\n"); 				//Mostra a mensagem na tela ao usuário.
	scanf("%f" , &numero2); 
	//Processamento de dados
	if(numero1>numero2) {								 	//Condição para mostrar os resultados.
	resto = (numero1 - numero2);
	//Saída de dados apresentada ao usuário
	printf ("\nA diferença entre o maior e menor número, é: %.0f", resto);		 				//Apresentará na tela ao usuário, caso a condição tenha sido atendida.
	}else if (numero1<numero2){
	resto = (numero2 - numero1);
	printf ("\nA diferença entre o maior e menor número, é: %.0f", resto);               //Apresentará na tela ao usuário, caso a condição NÃO tenha sido atendida.
	}
return 0;
}
