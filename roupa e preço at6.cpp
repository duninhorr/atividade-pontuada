#include <stdio.h>
#include <stdio.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"portuguese"); 


  int opcao;

    printf("Escolha uma opção :  1 - Novo jogo, 2 - Carregar jogo, 3 - Configurações . ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Novo jogo selecionado.\n");
           
            break;
        case 2:
            printf("Carregar jogo selecionado.\n");
           
            break;
        case 3:
            printf("Configurações selecionadas.\n");
            
            break;
        default:
            printf("Opção inválida.\n");
    }



  

    
    return 0;
}

