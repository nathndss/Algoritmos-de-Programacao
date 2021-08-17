/*Nathalia Nascimento da Silva      Matr�cula:UC19201113     Bacharelado em Ci�ncia da Computa��o*/

/*
Um cinema de Bras�lia est� interessado em descobrir o perfil das pessoas que frequentam suas sess�es de filmes e para isso, necessita realizar algumas
verifica��es nas informa��es prestadas.Devem ser solicitados a quantidade de sess�es que ser�o realizadas, o nome do filme, a quantidade de pessoas 
que assistiram o filme, assim como o sexo e a idade.
1. Solicite a quantidade de sess�es, e fa�a a valida��o, aceitando exatamente 2 (duas) sess�es.
2. Solicite o nome do filme, e fa�a a valida��o, n�o aceitando o nome �vazio�.
3. Solicite a quantidade de pessoas que assistiram ao filme, n�o podendo aceitar valor inferior a 10 (dez).
4. Para cada pessoa que assistiu ao filme dever� ser solicitado e validado o sexo (M - masculino, F - Feminino) e a idade (de 3 a 100 anos).
Ap�s a leitura dos dados do filme, dever� ser apresentado, em uma janela limpa:
1. o nome do filme, a quantidade de pessoas do sexo feminino e a quantidade de pessoas do sexo masculino que assistiram ao filme.
2. a quantidade de pessoas, seguindo a classifica��o por idade indicada abaixo.
Idade - Classifica��o
de 3 at� 13 anos - Crian�as
de 14 at� 17 anos - Adolescentes
de 18 at� 64 anos - Adultos
de 65 at� 100 anos - Idosos
Depois da leitura dos dados de cada sess�o, dever� ser mostrada, em uma tela limpa a quantidade de pessoas maiores de idade (idade maior ou igual a 18 anos) 
do sexo masculino e a quantidade de pessoas maiores de idade do sexo feminino que estiveram presentes.
*/


//Inclus�o de Bibliotecas
#include<stdio.h>  //biblioteca de printf e scanf
#include<ctype.h> //biblioteca para toupper
#include<string.h> //biblioteca para strlen
#include<stdlib.h>

int main (){ //inicio do algoritmo

//Declara��o de Vari�veis  - o livro c�digo limpo indica que devemos escolher nomes que revelem seu prop�sito, pois facilita o entendimento e posterior altera��o do c�digo. 
	int qtdSessoes, qtdPessoas, i, idade;    //Declara��o de vari�veis do tipo inteiro
	char filme[20]; //Declara��o de vari�vel do tipo char (nesse caso, cadeia de caracteres formando uma string com 20 caracteres)
	char sexo;      //Declarac��o de vari�vel do tipo caractere
	int feminino = 0;  //Declara��o de vari�veis do tipo inteiro determinando o valor com o qual ela � iniciada
	int masculino = 0; //Declara��o de vari�veis do tipo inteiro determinando o valor com o qual ela � iniciada
	int crianca = 0;//Declara��o de vari�veis do tipo inteiro determinando o valor com o qual ela � iniciada
	int adolescente = 0;//Declara��o de vari�veis do tipo inteiro determinando o valor com o qual ela � iniciada
	int adulto = 0;//Declara��o de vari�veis do tipo inteiro determinando o valor com o qual ela � iniciada
	int idoso = 0;//Declara��o de vari�veis do tipo inteiro determinando o valor com o qual ela � iniciada
	int maiorMas = 0;//Declara��o de vari�veis do tipo inteiro determinando o valor com o qual ela � iniciada
	int maiorFem = 0; //Declara��o de vari�veis do tipo inteiro determinando o valor com o qual ela � iniciada
	
	printf("<----------------------------------------------->\n"); //Apresenta��o do que est� entre " " na tela ao usu�rio
	printf("  --SEJA BEM VINDO AO CINEMA CEU DE BRASILIA!--\t\n"); //Apresenta��o do que est� entre " " na tela ao usu�rio
	printf("<----------------------------------------------->\n\n"); //Apresenta��o do que est� entre " " na tela ao usu�rio
	
//Entrada de Dados
	do{  //estrutura de repeti��o onde o bloco de instru��es �  executado no m�nimo uma vez
	printf("\n   Qual a quantidade de sessoes? --> "); //Apresenta��o do que est� entre " " na tela ao usu�rio
	scanf ("%d", &qtdSessoes); //recebe o dado digitado pelo usu�rio
	fflush(stdin); //fun��o para limpar buff do teclado
		if (qtdSessoes != 2){ //condi��o para apresentar um resultado
		printf("\n --ERRO-- Quantidade invalida. Lembre-se de digitar apenas 2 sessoes.\n"); //Apresenta��o do que est� entre " " na tela, caso a condi��o anterior seja atendida
		}else{} //faz o que est� entre chaves caso a condi��o anterior n�o seja atendida
	}while (qtdSessoes != 2); //condi��o que controla a estrutura de repeti��o DO
	++qtdSessoes; // operador de incremento que adiciona +1 na vari�vel toda vez que a repeti��o acontece
	printf("\n\n|-----------------------------------------------|\n");//Apresenta��o do que est� entre " " na tela ao usu�rio
	do { //estrutura de repeti��o onde o bloco de instru��es �  executado no m�nimo uma vez
	printf("\n\n   Qual o nome do filme? --> ");//Apresenta��o do que est� entre " " na tela ao usu�rio
	fgets(filme,20,stdin); //mesma fun��o do scanf, por�m permite o espa�o entre as palavras sem finalizar o comando
	fflush(stdin); //limpa o buff do teclado
		if(strlen(filme) <= 2){// condi��o - fun��o para valida��o da variavel do tipo string, n�o permitindo que ela esteja vazia ou com caracteres insuficientes
		printf("\n --ERRO-- Nome muito curto, verifique e tente novamente.\n");//Apresenta��o do que est� entre " " na tela ao usu�rio, caso a condi��o anterior tenha sido atendida
		}else{} //faz o que est� entre chaves caso a condi��o anterior n�o tenha sido atendida
	}while(strlen(filme) <= 2); //condi��o que controla a estrutura de repeti��o DO
	do{ //estrutura de repeti��o onde o bloco de instru��es �  executado no m�nimo uma vez
	printf("\n   Quantas pessoas assistiram ao filme? --> ");//Apresenta��o do que est� entre " " na tela ao usu�rio 
	scanf ("%d", &qtdPessoas);//recebe o dado digitado pelo usu�rio
	fflush(stdin); //limpa o buff do teclado
		if(qtdPessoas < 10){ //condi��o para mostrar um resultado
		printf("\n --ERRO-- Quantidade invalida. Lembre-se que a quantidade nao pode ser menor que 10.\n");//apresenta��o do resultado caso a condi��o anterior seja atendida
		}else{} //faz os comandos dentro da chave caso a condi��o anterior n�o seja atendida
	}while(qtdPessoas < 10);//condi��o que controla a estrutura de repeti��o DO
	++qtdPessoas;		// operador de incremento que adiciona +1 na vari�vel toda vez que a repeti��o acontece
	for (i=1; i<qtdPessoas; i++){//estrutura de repeti��o usada quando se sabe exatamente quantas vezes a repeti��o dever� ser executada e vai repetir o bloco de instru��o de acordo com essa quantidade de vezes
		do{//estrutura de repeti��o onde o bloco de instru��es �  executado no m�nimo uma vez
		printf("\n\n   Qual o sexo da pessoa %d? --> ", i); //apresenta na tela ao usu�rio e chama a vari�vel 
		sexo = toupper(sexo); //fun��o para transformar o sexo digitado em maisculo
		scanf("%c", &sexo); //le o dado digitado pelo usu�rio 
		fflush(stdin); //limpa o buff do teclado
			if(toupper(sexo) !='M' && toupper(sexo) !='F'){ //condi��o para executar um comando 
			printf("\n --ERRO-- Sexo invalido. Digite M ou F.\n"); //resultado mostrado na tela caso a condi��o anterior seja atendida
				}else if (toupper(sexo) == 'M'){ //caso a condi��o anterior n�o seja atendita implementa outra condi��o
				masculino = masculino + 1;  //indica o que aconetecer� caso a condi��o anteerior seja atendida
					}else if (toupper(sexo) == 'F'){ //caso a condi��o anterior n�o seja atendita implementa outra condi��o
					feminino = feminino + 1; //indica o que aconetecer� caso a condi��o anteerior seja atendida
			}else{} //indica entre chaves o que aconetecer� caso a condi��o anteerior n�o seja atendida
			if(toupper(sexo) =='M' && idade >=18){
				maiorMas = maiorMas + 1;
			}else if(toupper(sexo) =='F' && idade >=18){
			    maiorFem = maiorFem + 1;
			}
		}while (toupper(sexo) !='M' && toupper(sexo) != 'F');//condi��o que controla a estrutura de repeti��o DO
		++sexo;// operador de incremento que adiciona +1 na vari�vel toda vez que a repeti��o acontece
		do{//estrutura de repeti��o onde o bloco de instru��es �  executado no m�nimo uma vez
		printf("\n   Qual  idade da pessoa %d? --> ", i); //mostra na tela ao usu�rio e chama a vari�vel
		scanf("%d", &idade); //recebe o dado do usu�rio
		fflush(stdin); //limpa o buff do teclado
			if (idade < 3 || idade > 100){//condi��o para executar um comando 
			printf("\n --ERRO-- Idade invalida. Lembre-se que as idades devem ser de 3 a 100 anos.\n");//resultado mostrado na tela caso a condi��o anterior seja atendida
				}else if (idade >= 3 && idade <= 13){//caso a condi��o anterior n�o seja atendita implementa outra condi��o
	  	   		crianca = crianca + 1; //indica o que aconetecer� caso a condi��o anterior seja atendida
	  	   			}else if (idade >= 14 && idade <= 17){//caso a condi��o anterior n�o seja atendita implementa outra condi��o
	  	   			adolescente = adolescente + 1;//indica o que aconetecer� caso a condi��o anterior seja atendida
	  	   				}else if (idade >= 18 && idade <= 64){//caso a condi��o anterior n�o seja atendita implementa outra condi��o
	  	   				adulto = adulto + 1;//indica o que acontecer� caso a condi��o anterior seja atendida
							}else if (idade >= 65 && idade <= 100){//caso a condi��o anterior n�o seja atendita implementa outra condi��o
	  	   					idoso =  idoso + 1;//indica o que aconetecer� caso a condi��o anterior seja atendida
				} 
		}while (idade < 3 || idade > 100);//condi��o que controla a estrutura de repeti��o DO
		++idade;// operador de incremento que adiciona +1 na vari�vel toda vez que a repeti��o acontece
	}
	printf("\n\n|-----------------------------------------------|\n");//Apresenta��o do que est� entre " " na tela ao usu�rio 
	system ("cls"); //limpa a tela
	printf("\t<----------------------------------------------->\n");//Apresenta��o do que est� entre " " na tela ao usu�rio
	printf(" \t\t --INFORMACOES SOBRE A SESSAO!--\t\n");//Apresenta��o do que est� entre " " na tela ao usu�rio 
	printf("\t<----------------------------------------------->\n\n");//Apresenta��o do que est� entre " " na tela ao usu�rio 
	printf("\tFILME %s.\n", filme);//Apresenta��o do que est� entre " " na tela ao usu�rio e chama a vari�vel
	printf("\tQuantidade de pessoas do sexo Masculino: %d\n", masculino);//Apresenta��o do que est� entre " " na tela ao usu�rio e chama a vari�vel
	printf("\tQuantidade de pessoas do sexo Feminino: %d\n", feminino);//Apresenta��o do que est� entre " " na tela ao usu�rio e chama a vari�vel
	printf("\tQuantidade de criancas: %d\n", crianca);//Apresenta��o do que est� entre " " na tela ao usu�rio e chama a vari�vel
	printf("\tQuantidade de adolescentes: %d\n", adolescente);//Apresenta��o do que est� entre " " na tela ao usu�rio e chama a vari�vel
	printf("\tQuantidade de adultos: %d\n", adulto);//Apresenta��o do que est� entre " " na tela ao usu�rio e chama a vari�vel
	printf("\tQuantidade de idosos: %d\n", idoso); //Apresenta��o do que est� entre " " na tela ao usu�rio e chama a vari�vel
	printf("\n\n\tPARA MAIS DETALHES, APERTE QUALQUER TECLA.\n");//Apresenta��o do que est� entre " " na tela ao usu�rio (\n acrescenta um enter antes ou depois da frase)
	printf(""); //Apresenta��o do que est� entre " " na tela ao usu�rio 
	system("pause");//exige que o usu�rio aperte qualquer tecla antes de executar o proximo comando 
	system ("cls");//limpa a tela
	printf("\t<----------------------------------------------->\n");//Apresenta��o do que est� entre " " na tela ao usu�rio(\t acrescenta um tab antes da frase)
	printf("\t\t  --INFORMACOES GERAIS!--\t\n");//Apresenta��o do que est� entre " " na tela ao usu�rio (\t acrescenta um tab antes da frase)
	printf("\t<----------------------------------------------->\n\n");//Apresenta��o do que est� entre " " na tela ao usu�rio (\t acrescenta um tab antes da frase)
	printf("Estiveram presentes maiores de idade do sexo masculino: %d\n", maiorMas);//Apresenta��o do que est� entre " " na tela ao usu�rio e chama as vari�veis no final
	printf("Estiveram presentes maiores de idade do sexo feminino: %d\n", maiorFem);//Apresenta��o do que est� entre " " na tela ao usu�rio e chama as vari�veis no final

	return 0;
} //fim do algoritmo

