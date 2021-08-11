/*
Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores:
61 - Brasília
71 - Salvador
11 - São Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vitória
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identificação
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Função para permitir a acentuação
	//declaração de variáveis
	int ddd;                                                    
	//Entrada de Dados
	printf("Digite o DDD com dois dígitos: \n");   							 //Chinesinho: 24
	scanf("%d", &ddd);             
    //Processamento e saída de dados
	if (ddd == 61) 															  //Chinesinho:24=61 - FALSO  - Não é Brasília
	printf("\nEsse DDD pertence à cidade de Brasília - DF"); 
	  else if(ddd == 71)                              						  //Chinesinho: 24=71 - FALSO - Não é Salvador
	  printf("\nEsse DDD pertence à cidade de Salvador - BA");
	  	else if (ddd == 11)                       							 //Chinesinho: 24=11 - FALSO - Não é São Paulo
	  	printf("\nEsse DDD pertence à cidade de São Paulo - SP");
			else if (ddd == 21)  											 //Chinesinho: 24=21 - FALSO - Não é Rio de Janeiro
			printf("\nEsse DDD pertence à cidade de Rio de Janeiro - RJ");
				else if (ddd == 32)                                           //Chinesinho: 24=32 - FALSO - Não é Juiz de Fora
				printf("\nEsse DDD pertence à cidade de Juiz de Fora - MG");
					else if (ddd == 19)                                        //Chinesinho: 24=19 - FALSO - Não é Campinas
					printf("\nEsse DDD pertence à cidade de Campinas - SP");
						else if (ddd == 27)                                    //Chinesinho: 24=27 - FALSO - Não é Vitória
						printf("\nEsse DDD pertence à cidade de Vitória - ES");
							else if (ddd == 31)                                   //Chinesinho: 24=31 - FALSO - Não é Belo Horizonte
							printf("\nEsse DDD pertence à cidade de Belo Horizonte  - MG");
							else if (ddd!=61 && ddd!=71 && ddd!=11 && ddd!=21 && ddd!=32 && ddd!=19 && ddd!=27 && ddd!=31) //Chinesinho: 24 diferente de todos - VERDADEIRO - Cidade sem identificação
							printf("\nCidade sem identificação!"); 
return 0;
}
