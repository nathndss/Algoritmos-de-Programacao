/*Completar o exercício 3: 'Dado três valores, verificar se eles podem constituir os lados de um triângulo (triângulo é uma figura
 geométrica onde cada lado é menor do que a soma dos outros dois lados)' com uma mensagem para quando a condição não for satisfeita (falsa).*/
 
 //Inclusão de Bibliotecas
#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Função para permitir a acentuação
	//declaração de variáveis
	int valor1, valor2, valor3;
	//Entrada de Dados
	printf("Digite o valor 1: \n");    //Mostra a mensagem na tela ao usuário.
	scanf("%d", &valor1);             //Recebe o dado digitado pelo usuário.
	printf("\nDigite o valor 2: \n");  
	scanf("%d", &valor2);
	printf("\nDigite o valor 3: \n"); 
	scanf("%d", &valor3);
    //Processamento
	if ((valor1 + valor2) > valor3 && (valor1+valor3) > valor2 && (valor2+valor3) > valor1) //Condição para mostrar os resultados.
	//saída de dados
	printf("\nOs valores CONSTITUEM os lados de um triângulo!");              //Apresentará na tela ao usuário, caso a condição tenha sido atendida.
	else printf("\nOs valores NÃO constituem os lados de um triângulo!");    //Apresentará na tela ao usuário, caso a condição NÃO tenha sido atendida.
	   
return 0;
}
