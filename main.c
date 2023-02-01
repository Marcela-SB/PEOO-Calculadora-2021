#include <stdio.h>
#include <stdlib.h>

int main(){
	char operador;
	float n1, n2, resultado;
	int opcao;
	
	puts("BEM VINDO(A) A CALCULADORA...\n");
	
	do{
		puts("Digite a operacao desejada no formato 'num1 operador num2'\n");
		scanf("%f %c %f", &n1, &operador, &n2);
		
		switch(operador) {
			case '+':	
				resultado=n1+n2;
				printf("Resultado= %.2f\n\n", resultado);
			break;
			case '-':
				resultado=n1-n2;
				printf("Resultado= %.2f\n\n", resultado);
			break;
			case '*':
				resultado=n1*n2;
				printf("Resultado= %.2f\n\n", resultado);
			break;
			case '/':
				if(n2!=0){
					resultado=n1/n2;
				printf("Resultado= %.2f\n\n", resultado);
				}
				else{
					puts("\nIMPOSSIVEL DIVIDIR...\n");
				}			
			break;
		default:
			puts("\nOPCAO INVALIDA...\n");
		}
		
		printf("Para sair digite 0:  ");
		scanf("%d", &opcao);
		
		printf("\n------------------------------------------------------------\n\n");
	}while(opcao!=0);
	
	printf("VOCE SAIU DA CALCULADORA...\n\n");
	
	system("pause");
	return 0;
}
