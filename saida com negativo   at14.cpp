#include <stdio.h>
#include <stdio.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"portuguese"); 


	
     int num;
	 int contPar = 0;
	int contImpar = 0;
    float somaPar = 0;
	 float somaImpar = 0;

    printf("Digite um n�mero inteiro (negativo para sair): ");
    scanf("%d", &num);


    while(num >= 0) {
    	
        if(num % 2 == 0) {
            contPar++;
            somaPar += num;
        } else {
            contImpar++;
            somaImpar += num;
            
        }


        printf("Digite um n�mero inteiro (negativo para sair): ");
        scanf("%d", &num);
        
        
    }

    if(contPar > 0) {
    	
        printf("M�dia dos n�meros pares: %.2f\n", somaPar / contPar);
        
    } else {
    	
        printf("N�o foram digitados n�meros pares.\n");
    }

    if(contImpar > 0) {
    	
        printf("M�dia dos n�meros �mpares: %.2f\n", somaImpar / contImpar);
        
    } else {
    	
        printf("N�o foram digitados n�meros �mpares.\n");
    }

    return 0;
}

