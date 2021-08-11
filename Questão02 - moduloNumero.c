/*Efetuar a leitura de um número e apresentá-lo como o seu módulo (somente seu valor absoluto) elaborando os cálculos matemáticos para isso.*/

//Inclusão de Bibliotecas
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main () {
	setlocale(LC_ALL, "Portuguese");                       //Função para permitir a acentuação
	//declaração de variáveis
	float numero, valorAbsoluto;
	//Entrada de Dados
	printf("Digite o número: \n");                       //Mostra a mensagem na tela ao usuário.
	scanf("%f", &numero);                               //Recebe o dado digitado pelo usuário.
    //Processamento
	if (numero < 0)                                     //Condição para mostrar os resultados.
	//saída de dados
	   printf("Valor absoluto é: %.1f", numero*-1);     //Apresentará na tela ao usuário, caso a condição tenha sido atendida.
	   else printf("Valor absoluto é: %.1f",numero);    //Apresentará na tela ao usuário, caso a condição NÃO tenha sido atendida.
	   
return 0;
}
