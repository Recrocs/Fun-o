#include <stdio.h>

void imprime();
float soma (float A, float B);
float sub (float A, float B);
float mult (float A, float B);
float div (float A, float B);
float med (float A, float B);
float prc (float A, float B);

int main (){
		int op;
	   float v1, v2;
	   printf("Digite o primeiro numero\n");
	   scanf("%f", &v1);
	   printf("Digite o segundo numero\n");
	   scanf("%f", &v2);
	   float res = soma(v1,v2);
	   float res2 = sub(v1,v2);
	   float res3 = mult(v1,v2);
	   float res4 = div(v1,v2);
	   float res5 = med(v1,v2);
	   float res6 = prc(v1,v2);
	   
	   printf("Escolha uma opcao\n");
	   
	   printf(" 1- Soma\n");
	   printf(" 2- Subtracao\n");
	   printf(" 3- Multiplicacao\n");
	   printf(" 4- Divisao\n");
	   printf(" 5- Media\n");
	   printf(" 6- Porcentagem\n");
	   
	   scanf("%d", &op);
	   
        switch(op) {
		case 1:
			printf("Res = %.2f", res);
		    break;
	    case 2:
	    	printf("Res = %.2f", res2);
            break;
            
        case 3:
            printf("Res = %.2f", res3);
            break;
        
        case 4:
        	printf("Res = %.2f", res4);
        	break;
        	
        case 5:
        	printf("Res = %.2f", res5);
        	break;
        	
        case 6:
        	printf("Res = %.2f", res6);
        	break;
        	
        }
        return 0;
    
}
void imprime() {
    printf("teste\n");
}
 float soma(float A, float B){
float res;
res= A+B;
return res;
}
 float sub(float A, float B){
 	float res2;
 	res2= A-B;
 	return res2;
 }
  float mult(float A, float B){
float res3;
res3= A*B;
return res3;
}
 float div(float A, float B){
 	float res4;
 	res4= A/B;
 	return res4;
 }
  float med(float A, float B){
float res5;
res5= (A+B) / 2;
return res5;
}
 float prc(float A, float B){
 	float res6;
 	res6= (A/B) * 100;
 	return res6;
 }