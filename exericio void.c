#include <stdio.h>

void exercicio1();
void exercicio2();
void exercicio3();

int main() {
    int op;
    
    printf("1- Exercicio 1014\n");
    printf("2- Exercicio 1020\n");
    printf("3- Exercicio 1052\n");
    printf("4- Sair\n");
    scanf("%d", &op);

    switch(op) {
    case 1:
        exercicio1();
        break;
        
    case 2:
        exercicio2();
        break;
        
    case 3:
       exercicio3();
       break;
       
    default:
       printf("\nOpcao invalida !");
       break;
    }
    
    return 0;
}
    
void exercicio1 (){    
    int X;
    float Y;

    printf("Digite a distancia percorrida (km):\n ");
    scanf("%d", &X);
    
    printf("Digite o total de combustivel gasto (litros):\n ");
    scanf("%f", &Y);

    float consumo = X / Y;

    printf("%.3f km/l\n", consumo);
    
}

void exercicio2 (){
    int dias, anos, meses;

    printf("Digite a idade em dias:\n ");
    scanf("%d", &dias);
    
    anos = dias / 365;
    dias = dias % 365;

    meses = dias / 30;
    dias = dias % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

}



void exercicio3 (){
    int mes;
   
   printf("Digite um número de 1 a 12\n");
   scanf("%d", &mes);

    switch (mes) {
        case 1:  printf("January\n");
        break;
        
        case 2:  printf("February\n");
        break;
        
        case 3:  printf("March\n");
        break;
        
        case 4:  printf("April\n");
        break;
        
        case 5:  printf("May\n");
        break;
        
        case 6:  printf("June\n"); 
        break;
        
        case 7:  printf("July\n");
        break;
        
        case 8:  printf("August\n"); 
        break;
        
        case 9:  printf("September\n"); 
        break;
        
        case 10: printf("October\n");
        break;
        
        case 11: printf("November\n");
        break;
        
        case 12: printf("December\n");
        break;
        
        default: printf("Invalid month\n"); 
       
    }
    
}


