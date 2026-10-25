#include<stdio.h>
#include<math.h>
int main(){
    float num1, num2, soma, subtracao, mult, div;
    int op;
    printf("**************\n");
    printf("*****MENU*****\n");
    printf("**************\n");
    printf("1-Soma dois numeros\n");
    printf("2-subtracao dois numeros\n");
    printf("3-multiplicacao dois numeros\n");
    printf("4- divide dois numeros\n");
    printf("Digite um numero: ");
    scanf("%d",&op);
    switch(op){
    case 1:
        printf("Digite o primeiro numero: \n");
        scanf("%f",&num1);
        printf("Digite o segundo numero: \n");
        scanf("%f",&num2);

        soma = num1 + num2;

        printf("Soma de %.2f + %.2f = %.2f\n",num1,num2,soma);
        break;
    case 2:
        printf("Digite o primeiro numero: \n");
        scanf("%f",num1);
        printf("Digite o segundo numero: \n");
        scanf("%f",&num2);

        subtracao = num1 - num2;

        printf("Subtracao de %.2f - %.2f = %.2f \n",num1,num2,subtracao);
        break;
    case 3:
        printf("Digite o primeiro numero: \n");
        scanf("%f",&num1);
        printf("Digite o segundo numero: \n");
        scanf("%f",&num2);

        mult = num1 * num2;

        printf("multiplicacao de %.2f * %.2f = %.2f\n",num1,num2,mult);
        break;
    case 4:
        printf("Digite o primeiro numero: \n");
        scanf("%f",&num1);
        printf("Digite o segundo numero: \n");
        scanf("%f",&num2);

        div = num1 / num2;

        printf("Divisao de %.2f / %.2f = %.2f\n",num1,num2,div);
        break;
    default:
        printf("Valor invalido");
    }
    return 0;
}
