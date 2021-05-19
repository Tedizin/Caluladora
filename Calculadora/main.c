//
//  main.c
//  Calculadora
//
//  Created by Henrique Silva on 23/03/21.
//

#include <stdio.h>

int main(void){
    
    float x=0, y=0, resultado=0;
    int op=0;
    
    do{
        printf("\n\tSelecione uma das opcoes abaixo\n");
        printf("\n\t1 - SOMA\n\t2 - SUBTRACAO\n\t3 - MULTIPLICACAO\n\t4 - DIVISAO\n \n\tDigite aqui: ");
        scanf("%i", &op);
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &x);
        printf("\nDigite o segundo numero: ");
        scanf("%f", &y);
        
        switch(op){
            case 1:
                resultado = x+y;
                break;
            case 2:
                resultado = x-y;
                break;
            case 3:
                resultado = x*y;
                break;
            case 4:
                resultado = x/y;
                break;
                
            default:
                printf("\n Digite uma opcao valida\n");
                break;
        }
        
        printf("\n\tO resultado é = %0.2f", resultado);
        printf("\n\nDigite 1 para continuar: ");
        scanf("%i", &op);
        
    }while(op==1);
}
