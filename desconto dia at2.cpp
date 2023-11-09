#include <stdio.h>
#include <stdio.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"portuguese");

   
    float desconto;
    float valor;
    int dia ;
 
 
     printf(" temos descontos  nas compras acima de 100 R$  !!!!\n");
     
    printf("Digite o valor da compra: ");
    
    scanf("%f", &valor);

    printf("Digite o dia da semana (1 para segunda-feira, 7 para domingo): ");
    
    scanf("%d", &dia);

  
if (valor > 100.00) {
        if (dia <= 5) {
            desconto = valor * 0.10;
            
      printf("O desconto é de R$ %.2f , O valor final é R$ %.2f  \n", desconto, valor - desconto);
        } 
		
		else if (dia == 6 || dia == 7) {
            desconto = valor * 0.15;
            
         	printf("O desconto é de R$ %.2f. O valor final é R$ %.2f.\n", desconto, valor - desconto);
       
	   }
	   
    } else {
    	
        printf("O valor da compra não é elegível para desconto.\n");
    }





 return 0;
}
