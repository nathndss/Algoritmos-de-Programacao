/*Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao motorista somente se ele será multado, 
quando estiver trafegando no Eixo Rodoviário (limite de 80 km/h).*/

//Inclusão de Bibliotecas
#include<stdio.h>
#include<locale.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Função para permitir a acentuação.
	//declaração de variáveis
	char placa[7]; 
	float velocidade;
	//Entrada de Dados
	printf ("Digite a placa do carro (7 dígitos):\n"); 						//Mostra a mensagem na tela ao usuário.
	scanf("%s" , &placa); 											//Recebe o dado digitado pelo usuário.
	printf ("\nDigite a velocidade do carro (Km/h):\n"); 
	scanf("%f", &velocidade);
	//Processamento de dados
	if(velocidade >80) 										   	//Condição para mostrar os resultados.
	//Saída de dados apresentada ao usuário
	printf("\nVelocidade acima do permitido. Você será multado.");		 //Apresentará na tela ao usuário, caso a condição tenha sido atendida.
	
return 0;
}
