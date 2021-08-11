/*Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à Internet, para isso você deverá ler 
a quantidade de horas que você utilizou. Sabe-se que você pagará R$ 30,00 por até 20 horas de uso (va1or básico),
 caso você tenha usado mais de 20 horas, então você deve acrescentar 10% do valor básico para cada hora extra utilizada.*/

//Inclusão de Bibliotecas
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

int main () {
	setlocale(LC_ALL, "Portuguese"); //Função para permitir a acentuação.
	//declaração de variáveis
	float horasUsadas, valBasico, horasExtras, valExtra, valTotal;  
	//Entrada de Dados
	printf ("Digite a quantidade de horas utilizadas:\n"); 		//Mostrar ao usuário a mensagem para digitar o dado				     		
	scanf("%f" , &horasUsadas);				                //Receber o dado do usuário
	//Processamento e saída de dados
	valBasico = 30;
	horasExtras = horasUsadas - 20;
	valExtra = horasExtras * 3;
	valTotal = valBasico + valExtra;
	if(horasUsadas <= 20) {       				                       				//Condição para mostrar um resultado																					
		printf ("\nO valor da internet a ser pago é: R$%.2f", valBasico);   		//Mostra o resultado caso a condição tenha sido atendida
		}else if (horasUsadas > 20) {                 								//Mostra o resultado caso a condição não tenha sido atendida e coloca outra condição																						
		printf ("\nVocê usou %.2f horas extras, o valor da internet a ser pago é: R$%.2f", horasExtras, valTotal);                
		}
return 0;
}
