/*
Modifique o algoritmo 4: 'Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saída uma das seguintes mensagens:
“Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.” para o sexo feminino, acrescentando o nome em seguida.' - para ler a altura e apresentar 
o peso ideal da pessoa, utilizando as seguintes fórmulas:
para homem: peso = (72.5 * altura) - 58
para mulher: peso = (62.1 * altura) - 44.7
*/
 
 //Inclusão de Bibliotecas
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main () {
	//declaração de variáveis
	char nome[20];
	char sexo;
	int M, F;
	float pesoM, pesoF;
	double altura;
	//Entrada de Dados
	printf("Digite o nome da pessoa: \n");    //Mostra a mensagem na tela ao usuário.
	scanf("%s", &nome);                      //Recebe o dado digitado pelo usuário.
	fflush(stdin);
	printf("\nDigite o sexo de %s (M ou F): \n", &nome);  
	scanf("%c", &sexo);
	fflush(stdin);
	printf("\nDigite a altura de %s (m): \n", &nome);  
	scanf("%lf", &altura);
	fflush(stdin);
    //Processamento e saída de dados
    pesoM = 72.5 * altura - 58;
	pesoF = 62.1 * altura - 44.7;
    if (toupper(sexo)=='M')  										 //condição para um resultado
		printf("\nIlmo Sr. %s\nSeu peso ideal: %.2fkg", &nome, pesoM);   //mostra o resultado caso a condição tenha sido atendida
	else
		printf("\nIlma Sra. %s\nSeu peso ideal: %.2fkg", &nome, pesoF); //mostra o resultado caso a condição não tenha sido atendida
return 0;
}
