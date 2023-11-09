#include <stdio.h>
#include <stdio.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"portuguese"); 


    int codigoAcessoCorreto = 6352;
    int codigoAcessoInserido;



    do {
        printf("Por favor, insira o código de acesso: ");
        scanf("%d", &codigoAcessoInserido);
    
	
	
	} while(codigoAcessoInserido != codigoAcessoCorreto);

    printf("Acesso concedido!\n");

    return 0;
}

