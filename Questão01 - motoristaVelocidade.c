/*Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao motorista somente se ele ser� multado, 
quando estiver trafegando no Eixo Rodovi�rio (limite de 80 km/h).*/

//Inclus�o de Bibliotecas
#include<stdio.h>
#include<locale.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Fun��o para permitir a acentua��o.
	//declara��o de vari�veis
	char placa[7]; 
	float velocidade;
	//Entrada de Dados
	printf ("Digite a placa do carro (7 d�gitos):\n"); 						//Mostra a mensagem na tela ao usu�rio.
	scanf("%s" , &placa); 											//Recebe o dado digitado pelo usu�rio.
	printf ("\nDigite a velocidade do carro (Km/h):\n"); 
	scanf("%f", &velocidade);
	//Processamento de dados
	if(velocidade >80) 										   	//Condi��o para mostrar os resultados.
	//Sa�da de dados apresentada ao usu�rio
	printf("\nVelocidade acima do permitido. Voc� ser� multado.");		 //Apresentar� na tela ao usu�rio, caso a condi��o tenha sido atendida.
	
return 0;
}
