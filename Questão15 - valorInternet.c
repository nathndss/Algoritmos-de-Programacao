/*Fa�a um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso � Internet, para isso voc� dever� ler 
a quantidade de horas que voc� utilizou. Sabe-se que voc� pagar� R$ 30,00 por at� 20 horas de uso (va1or b�sico),
 caso voc� tenha usado mais de 20 horas, ent�o voc� deve acrescentar 10% do valor b�sico para cada hora extra utilizada.*/

//Inclus�o de Bibliotecas
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Fun��o para permitir a acentua��o.
	//declara��o de vari�veis
	float horasUsadas, valBasico, horasExtras, valExtra, valTotal;  
	//Entrada de Dados
	printf ("Digite a quantidade de horas utilizadas:\n"); 		//Mostrar ao usu�rio a mensagem para digitar o dado				     		
	scanf("%f" , &horasUsadas);				                //Receber o dado do usu�rio
	//Processamento e sa�da de dados
	valBasico = 30;
	horasExtras = horasUsadas - 20;
	valExtra = horasExtras * 3;
	valTotal = valBasico + valExtra;
	if(horasUsadas <= 20) {       				                       				//Condi��o para mostrar um resultado																					
		printf ("\nO valor da internet a ser pago �: R$%.2f", valBasico);   		//Mostra o resultado caso a condi��o tenha sido atendida
		}else if (horasUsadas > 20) {                 								//Mostra o resultado caso a condi��o n�o tenha sido atendida e coloca outra condi��o																						
		printf ("\nVoc� usou %.2f horas extras, o valor da internet a ser pago �: R$%.2f", horasExtras, valTotal);                
		}
return 0;
}
