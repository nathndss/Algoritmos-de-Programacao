/*
Fa�a um algoritmo em portugu�s estruturado que leia o n�mero de DDD e informe a qual cidade pertence, considerando s� os seguintes valores:
61 - Bras�lia
71 - Salvador
11 - S�o Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vit�ria
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identifica��o
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Fun��o para permitir a acentua��o
	//declara��o de vari�veis
	int ddd;                                                    
	//Entrada de Dados
	printf("Digite o DDD com dois d�gitos: \n");   							 //Chinesinho: 24
	scanf("%d", &ddd);             
    //Processamento e sa�da de dados
	if (ddd == 61) 															  //Chinesinho:24=61 - FALSO  - N�o � Bras�lia
	printf("\nEsse DDD pertence � cidade de Bras�lia - DF"); 
	  else if(ddd == 71)                              						  //Chinesinho: 24=71 - FALSO - N�o � Salvador
	  printf("\nEsse DDD pertence � cidade de Salvador - BA");
	  	else if (ddd == 11)                       							 //Chinesinho: 24=11 - FALSO - N�o � S�o Paulo
	  	printf("\nEsse DDD pertence � cidade de S�o Paulo - SP");
			else if (ddd == 21)  											 //Chinesinho: 24=21 - FALSO - N�o � Rio de Janeiro
			printf("\nEsse DDD pertence � cidade de Rio de Janeiro - RJ");
				else if (ddd == 32)                                           //Chinesinho: 24=32 - FALSO - N�o � Juiz de Fora
				printf("\nEsse DDD pertence � cidade de Juiz de Fora - MG");
					else if (ddd == 19)                                        //Chinesinho: 24=19 - FALSO - N�o � Campinas
					printf("\nEsse DDD pertence � cidade de Campinas - SP");
						else if (ddd == 27)                                    //Chinesinho: 24=27 - FALSO - N�o � Vit�ria
						printf("\nEsse DDD pertence � cidade de Vit�ria - ES");
							else if (ddd == 31)                                   //Chinesinho: 24=31 - FALSO - N�o � Belo Horizonte
							printf("\nEsse DDD pertence � cidade de Belo Horizonte  - MG");
							else if (ddd!=61 && ddd!=71 && ddd!=11 && ddd!=21 && ddd!=32 && ddd!=19 && ddd!=27 && ddd!=31) //Chinesinho: 24 diferente de todos - VERDADEIRO - Cidade sem identifica��o
							printf("\nCidade sem identifica��o!"); 
return 0;
}
