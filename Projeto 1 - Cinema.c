/*Nathalia Nascimento da Silva      Matrícula:UC19201113     Bacharelado em Ciência da Computação*/

/*
Um cinema de Brasília está interessado em descobrir o perfil das pessoas que frequentam suas sessões de filmes e para isso, necessita realizar algumas
verificações nas informações prestadas.Devem ser solicitados a quantidade de sessões que serão realizadas, o nome do filme, a quantidade de pessoas 
que assistiram o filme, assim como o sexo e a idade.
1. Solicite a quantidade de sessões, e faça a validação, aceitando exatamente 2 (duas) sessões.
2. Solicite o nome do filme, e faça a validação, não aceitando o nome “vazio”.
3. Solicite a quantidade de pessoas que assistiram ao filme, não podendo aceitar valor inferior a 10 (dez).
4. Para cada pessoa que assistiu ao filme deverá ser solicitado e validado o sexo (M - masculino, F - Feminino) e a idade (de 3 a 100 anos).
Após a leitura dos dados do filme, deverá ser apresentado, em uma janela limpa:
1. o nome do filme, a quantidade de pessoas do sexo feminino e a quantidade de pessoas do sexo masculino que assistiram ao filme.
2. a quantidade de pessoas, seguindo a classificação por idade indicada abaixo.
Idade - Classificação
de 3 até 13 anos - Crianças
de 14 até 17 anos - Adolescentes
de 18 até 64 anos - Adultos
de 65 até 100 anos - Idosos
Depois da leitura dos dados de cada sessão, deverá ser mostrada, em uma tela limpa a quantidade de pessoas maiores de idade (idade maior ou igual a 18 anos) 
do sexo masculino e a quantidade de pessoas maiores de idade do sexo feminino que estiveram presentes.
*/


//Inclusão de Bibliotecas
#include<stdio.h>  //biblioteca de printf e scanf
#include<ctype.h> //biblioteca para toupper
#include<string.h> //biblioteca para strlen
#include<stdlib.h>

int main (){ //inicio do algoritmo

//Declaração de Variáveis  - o livro código limpo indica que devemos escolher nomes que revelem seu propósito, pois facilita o entendimento e posterior alteração do código. 
	int qtdSessoes, qtdPessoas, i, idade;    //Declaração de variáveis do tipo inteiro
	char filme[20]; //Declaração de variável do tipo char (nesse caso, cadeia de caracteres formando uma string com 20 caracteres)
	char sexo;      //Declaracção de variável do tipo caractere
	int feminino = 0;  //Declaração de variáveis do tipo inteiro determinando o valor com o qual ela é iniciada
	int masculino = 0; //Declaração de variáveis do tipo inteiro determinando o valor com o qual ela é iniciada
	int crianca = 0;//Declaração de variáveis do tipo inteiro determinando o valor com o qual ela é iniciada
	int adolescente = 0;//Declaração de variáveis do tipo inteiro determinando o valor com o qual ela é iniciada
	int adulto = 0;//Declaração de variáveis do tipo inteiro determinando o valor com o qual ela é iniciada
	int idoso = 0;//Declaração de variáveis do tipo inteiro determinando o valor com o qual ela é iniciada
	int maiorMas = 0;//Declaração de variáveis do tipo inteiro determinando o valor com o qual ela é iniciada
	int maiorFem = 0; //Declaração de variáveis do tipo inteiro determinando o valor com o qual ela é iniciada
	
	printf("<----------------------------------------------->\n"); //Apresentação do que está entre " " na tela ao usuário
	printf("  --SEJA BEM VINDO AO CINEMA CEU DE BRASILIA!--\t\n"); //Apresentação do que está entre " " na tela ao usuário
	printf("<----------------------------------------------->\n\n"); //Apresentação do que está entre " " na tela ao usuário
	
//Entrada de Dados
	do{  //estrutura de repetição onde o bloco de instruções é  executado no mínimo uma vez
	printf("\n   Qual a quantidade de sessoes? --> "); //Apresentação do que está entre " " na tela ao usuário
	scanf ("%d", &qtdSessoes); //recebe o dado digitado pelo usuário
	fflush(stdin); //função para limpar buff do teclado
		if (qtdSessoes != 2){ //condição para apresentar um resultado
		printf("\n --ERRO-- Quantidade invalida. Lembre-se de digitar apenas 2 sessoes.\n"); //Apresentação do que está entre " " na tela, caso a condição anterior seja atendida
		}else{} //faz o que está entre chaves caso a condição anterior não seja atendida
	}while (qtdSessoes != 2); //condição que controla a estrutura de repetição DO
	++qtdSessoes; // operador de incremento que adiciona +1 na variável toda vez que a repetição acontece
	printf("\n\n|-----------------------------------------------|\n");//Apresentação do que está entre " " na tela ao usuário
	do { //estrutura de repetição onde o bloco de instruções é  executado no mínimo uma vez
	printf("\n\n   Qual o nome do filme? --> ");//Apresentação do que está entre " " na tela ao usuário
	fgets(filme,20,stdin); //mesma função do scanf, porém permite o espaço entre as palavras sem finalizar o comando
	fflush(stdin); //limpa o buff do teclado
		if(strlen(filme) <= 2){// condição - função para validação da variavel do tipo string, não permitindo que ela esteja vazia ou com caracteres insuficientes
		printf("\n --ERRO-- Nome muito curto, verifique e tente novamente.\n");//Apresentação do que está entre " " na tela ao usuário, caso a condição anterior tenha sido atendida
		}else{} //faz o que está entre chaves caso a condição anterior não tenha sido atendida
	}while(strlen(filme) <= 2); //condição que controla a estrutura de repetição DO
	do{ //estrutura de repetição onde o bloco de instruções é  executado no mínimo uma vez
	printf("\n   Quantas pessoas assistiram ao filme? --> ");//Apresentação do que está entre " " na tela ao usuário 
	scanf ("%d", &qtdPessoas);//recebe o dado digitado pelo usuário
	fflush(stdin); //limpa o buff do teclado
		if(qtdPessoas < 10){ //condição para mostrar um resultado
		printf("\n --ERRO-- Quantidade invalida. Lembre-se que a quantidade nao pode ser menor que 10.\n");//apresentação do resultado caso a condição anterior seja atendida
		}else{} //faz os comandos dentro da chave caso a condição anterior não seja atendida
	}while(qtdPessoas < 10);//condição que controla a estrutura de repetição DO
	++qtdPessoas;		// operador de incremento que adiciona +1 na variável toda vez que a repetição acontece
	for (i=1; i<qtdPessoas; i++){//estrutura de repetição usada quando se sabe exatamente quantas vezes a repetição deverá ser executada e vai repetir o bloco de instrução de acordo com essa quantidade de vezes
		do{//estrutura de repetição onde o bloco de instruções é  executado no mínimo uma vez
		printf("\n\n   Qual o sexo da pessoa %d? --> ", i); //apresenta na tela ao usuário e chama a variável 
		sexo = toupper(sexo); //função para transformar o sexo digitado em maisculo
		scanf("%c", &sexo); //le o dado digitado pelo usuário 
		fflush(stdin); //limpa o buff do teclado
			if(toupper(sexo) !='M' && toupper(sexo) !='F'){ //condição para executar um comando 
			printf("\n --ERRO-- Sexo invalido. Digite M ou F.\n"); //resultado mostrado na tela caso a condição anterior seja atendida
				}else if (toupper(sexo) == 'M'){ //caso a condição anterior não seja atendita implementa outra condição
				masculino = masculino + 1;  //indica o que aconetecerá caso a condição anteerior seja atendida
					}else if (toupper(sexo) == 'F'){ //caso a condição anterior não seja atendita implementa outra condição
					feminino = feminino + 1; //indica o que aconetecerá caso a condição anteerior seja atendida
			}else{} //indica entre chaves o que aconetecerá caso a condição anteerior não seja atendida
			if(toupper(sexo) =='M' && idade >=18){
				maiorMas = maiorMas + 1;
			}else if(toupper(sexo) =='F' && idade >=18){
			    maiorFem = maiorFem + 1;
			}
		}while (toupper(sexo) !='M' && toupper(sexo) != 'F');//condição que controla a estrutura de repetição DO
		++sexo;// operador de incremento que adiciona +1 na variável toda vez que a repetição acontece
		do{//estrutura de repetição onde o bloco de instruções é  executado no mínimo uma vez
		printf("\n   Qual  idade da pessoa %d? --> ", i); //mostra na tela ao usuário e chama a variável
		scanf("%d", &idade); //recebe o dado do usuário
		fflush(stdin); //limpa o buff do teclado
			if (idade < 3 || idade > 100){//condição para executar um comando 
			printf("\n --ERRO-- Idade invalida. Lembre-se que as idades devem ser de 3 a 100 anos.\n");//resultado mostrado na tela caso a condição anterior seja atendida
				}else if (idade >= 3 && idade <= 13){//caso a condição anterior não seja atendita implementa outra condição
	  	   		crianca = crianca + 1; //indica o que aconetecerá caso a condição anterior seja atendida
	  	   			}else if (idade >= 14 && idade <= 17){//caso a condição anterior não seja atendita implementa outra condição
	  	   			adolescente = adolescente + 1;//indica o que aconetecerá caso a condição anterior seja atendida
	  	   				}else if (idade >= 18 && idade <= 64){//caso a condição anterior não seja atendita implementa outra condição
	  	   				adulto = adulto + 1;//indica o que acontecerá caso a condição anterior seja atendida
							}else if (idade >= 65 && idade <= 100){//caso a condição anterior não seja atendita implementa outra condição
	  	   					idoso =  idoso + 1;//indica o que aconetecerá caso a condição anterior seja atendida
				} 
		}while (idade < 3 || idade > 100);//condição que controla a estrutura de repetição DO
		++idade;// operador de incremento que adiciona +1 na variável toda vez que a repetição acontece
	}
	printf("\n\n|-----------------------------------------------|\n");//Apresentação do que está entre " " na tela ao usuário 
	system ("cls"); //limpa a tela
	printf("\t<----------------------------------------------->\n");//Apresentação do que está entre " " na tela ao usuário
	printf(" \t\t --INFORMACOES SOBRE A SESSAO!--\t\n");//Apresentação do que está entre " " na tela ao usuário 
	printf("\t<----------------------------------------------->\n\n");//Apresentação do que está entre " " na tela ao usuário 
	printf("\tFILME %s.\n", filme);//Apresentação do que está entre " " na tela ao usuário e chama a variável
	printf("\tQuantidade de pessoas do sexo Masculino: %d\n", masculino);//Apresentação do que está entre " " na tela ao usuário e chama a variável
	printf("\tQuantidade de pessoas do sexo Feminino: %d\n", feminino);//Apresentação do que está entre " " na tela ao usuário e chama a variável
	printf("\tQuantidade de criancas: %d\n", crianca);//Apresentação do que está entre " " na tela ao usuário e chama a variável
	printf("\tQuantidade de adolescentes: %d\n", adolescente);//Apresentação do que está entre " " na tela ao usuário e chama a variável
	printf("\tQuantidade de adultos: %d\n", adulto);//Apresentação do que está entre " " na tela ao usuário e chama a variável
	printf("\tQuantidade de idosos: %d\n", idoso); //Apresentação do que está entre " " na tela ao usuário e chama a variável
	printf("\n\n\tPARA MAIS DETALHES, APERTE QUALQUER TECLA.\n");//Apresentação do que está entre " " na tela ao usuário (\n acrescenta um enter antes ou depois da frase)
	printf(""); //Apresentação do que está entre " " na tela ao usuário 
	system("pause");//exige que o usuário aperte qualquer tecla antes de executar o proximo comando 
	system ("cls");//limpa a tela
	printf("\t<----------------------------------------------->\n");//Apresentação do que está entre " " na tela ao usuário(\t acrescenta um tab antes da frase)
	printf("\t\t  --INFORMACOES GERAIS!--\t\n");//Apresentação do que está entre " " na tela ao usuário (\t acrescenta um tab antes da frase)
	printf("\t<----------------------------------------------->\n\n");//Apresentação do que está entre " " na tela ao usuário (\t acrescenta um tab antes da frase)
	printf("Estiveram presentes maiores de idade do sexo masculino: %d\n", maiorMas);//Apresentação do que está entre " " na tela ao usuário e chama as variáveis no final
	printf("Estiveram presentes maiores de idade do sexo feminino: %d\n", maiorFem);//Apresentação do que está entre " " na tela ao usuário e chama as variáveis no final

	return 0;
} //fim do algoritmo

